#include <iostream>

float fractionalKnapsack(float weight[], float profit[], float capacity, int n)
{
    int i = 0;
    float maxprofit = 0.0, fraction;
    while (weight[i] <= capacity)
    {
        maxprofit = maxprofit + profit[i];
        capacity = capacity - float(weight[i]);
        i++;
    }
    if (i < n)
    {
        fraction = capacity / weight[i];
        maxprofit = maxprofit + fraction * profit[i];
    }

    return maxprofit;
}

float fractionalKnapsack1(float weight[], float profit[], float capacity, int n)
{
    float fraction;
    if (n == 0)
    {
        return 0;
    }

    if (weight[n] > capacity)
    {
        fraction = capacity / weight[n];
        return fraction * profit[n];
    }
    if (weight[n] <= capacity)
    {
        capacity = capacity - weight[n];
        return profit[n] + fractionalKnapsack1(weight, profit, capacity, n - 1);
    }
}

int main()
{
    int n;
    float capacity;
    std::cout << "Items: ";
    std::cin >> n;
    std::cout << "\nCapacity: ";
    std::cin >> capacity;
    float profit[n], weight[n];
    float ratio[n];
    for (int item = 0; item < n; item++)
    {
        std::cout << "weight profit: ";
        std::cin >> weight[item] >> profit[item];
        ratio[item] = profit[item] / weight[item];
    }

    // sort by ratio
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ratio[i] > ratio[j])
            {
                ratio[i] = ratio[i] + ratio[j];
                ratio[j] = ratio[i] - ratio[j];
                ratio[i] = ratio[i] - ratio[j];

                profit[i] = profit[i] + profit[j];
                profit[j] = profit[i] - profit[j];
                profit[i] = profit[i] - profit[j];

                weight[i] = weight[i] + weight[j];
                weight[j] = weight[i] - weight[j];
                weight[i] = weight[i] - weight[j];
            }
        }
    }
    std::cout << "Max Profit: " << fractionalKnapsack1(weight, profit, capacity, n);
    return 0;
}