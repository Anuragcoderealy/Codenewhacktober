#include <iostream>

#define INF 999;
int graph[100][100];

void showGraph(int vertices)
{

    for (int s = 0; s < vertices; ++s)
    {
        for (int d = 0; d < vertices; ++d)
        {
            std::cout << graph[s][d] << " ";
        }
        std::cout << std::endl;
    }
}

void floydWarshall(int vertices)
{
    for (int via = 0; via < vertices; ++via)
    {
        for (int s = 0; s < vertices; ++s)
        {
            for (int d = 0; d < vertices; ++d)
            {
                if (graph[s][via] + graph[via][d] < graph[s][d])
                {
                    graph[s][d] = graph[s][via] + graph[via][d];
                }
            }
        }
    }
}

int main()
{
    int vertices;
    std::cout << "\nNo Of Vertices: ";
    std::cin >> vertices;
    for (int s = 0; s < vertices; ++s)
    {
        for (int d = 0; d < vertices; ++d)
        {
            std::cout << "Enter Weight " << s << "->" << d << ":";
            std::cin >> graph[s][d];
            if (graph[s][d] == 0 && s != d)
            {
                graph[s][d] = INF;
            }
        }
    }

    floydWarshall(vertices);
    showGraph(vertices);
    return 0;
}