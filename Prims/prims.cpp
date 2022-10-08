#include <iostream>
#define INF 999;
int graph[100][100];

void prims(int vertices)
{
    int edges, min, s, d;
    int selected[vertices];
    for (int v = 0; v < vertices; ++v)
    {
        selected[v] = false;
    }
    selected[0] = true;
    edges = 0;
    while (edges < vertices - 1)
    {
        s = 0;
        d = 0;
        min = INF;
        for (int v = 0; v < vertices; ++v)
        {
            if (selected[v])
            {
                for (int e = 0; e < vertices; ++e)
                {
                    if (!selected[e] && graph[v][e])
                    {
                        if (graph[v][e] < min)
                        {
                            min = graph[v][e];
                            s = v;
                            d = e;
                        }
                    }
                }
            }
        }
        ++edges;
        std::cout << s << "->" << d << ": " << graph[s][d] << std::endl;
        selected[d] = true;
    }
}

int main()
{
    int vertices;
    std::cout << "\nNo Of Vertices: ";
    std::cin >> vertices;
    std::cout << "\nEnter Weights as Matrix:";
    for (int s = 0; s < vertices; ++s)
    {
        for (int d = 0; d < vertices; ++d)
        {
            std::cin >> graph[s][d];
        }
    }

    prims(vertices);
    return 0;
}