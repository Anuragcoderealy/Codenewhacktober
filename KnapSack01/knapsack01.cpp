#include <bits/stdc++.h>
using namespace std;

int knapSack(int capacity, int weight[], int profit[], int n)
{
    if (n == 0 || capacity == 0)
        return 0;
    if (weight[n - 1] > capacity)
        return knapSack(capacity, weight, profit, n - 1);
    else
    {
        if (profit[n - 1] + knapSack(capacity - weight[n - 1], weight, profit, n - 1) > knapSack(capacity, weight, profit, n - 1))
        {
            return profit[n - 1] + knapSack(capacity - weight[n - 1], weight, profit, n - 1);
        }
        return knapSack(capacity, weight, profit, n - 1);
    }
}

// Driver code
int main()
{
    int profit[] = {60, 100, 120};
    int weight[] = {10, 20, 30};
    int capacity = 50;
    int n = sizeof(profit) / sizeof(profit[0]);
    cout << knapSack(capacity, weight, profit, n);
    return 0;
}