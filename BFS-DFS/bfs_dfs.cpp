#include <iostream>
#include <vector>
#include <list>
#include <stack>

// Graph
class Graph
{
private:
    std::vector<std::list<int>> adjList;
    int vertices;

public:
    Graph(int v)
    {
        this->vertices = v;
        this->adjList.resize(v);
    }

    void addEdge(int source, int dest)
    {
        this->adjList[source].push_back(dest);
    }

    void bfs(int source)
    {
        std::list<int> queue;
        std::vector<bool> visited;
        visited.resize(this->vertices, false);
        queue.push_back(source);
        visited[source] = true;
        std::cout << "\nBreadth First Search: ";
        while (!queue.empty())
        {
            int curr = queue.front();
            std::cout << " -> " << curr;
            queue.pop_front();
            for (auto vertex : this->adjList[curr])
            {
                if (!visited[vertex])
                {
                    visited[vertex] = true;
                    queue.push_back(vertex);
                }
            }
        }
    }

    void dfs(int source)
    {
        std::stack<int> s;
        std::vector<bool> visited;
        visited.resize(this->vertices, false);
        s.push(source);
        visited[source] = true;
        std::cout << "\nDepth First Search: ";
        while (!s.empty())
        {
            int curr = s.top();
            std::cout << " -> " << curr;
            s.pop();
            for (auto vertex : this->adjList[curr])
            {
                if (!visited[vertex])
                {
                    visited[vertex] = true;
                    s.push(vertex);
                }
            }
        }
    }
};

// main()
int main(int argc, char *argv[])
{
    int vertices, edges, source, dest;
    std::cout << "\nVertices & Egdes: ";
    std::cin >> vertices >> edges;
    std::cout << "Edges Source Destination: " << std::endl;

    Graph graph(vertices);
    for (int idx = 0; idx < edges; ++idx)
    {
        std::cin >> source >> dest;
        graph.addEdge(source, dest);
    }
    std::cout << "\nSOurce: " << std::endl;
    std::cin >> source;
    graph.bfs(source);
    graph.dfs(source);
    return 0;
}
