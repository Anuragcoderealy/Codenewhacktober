#include<bits/stdc++.h>
using namespace std;

class graph{
	public:
		map<int,bool> visited;
		map<int,list<int>> adj;
		
		void addedge(int v,int w);
		void dfs(int v);
		
};

void graph::addedge(int v,int w)
{
	adj[v].push_back(w);
}
void graph::dfs(int v)
{
	visited[v]=true;
	cout<<v<<" ";
	
	
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();i++)
	{
		if(!visited[*i])
		dfs(*i);
	}
}




int main()
{
    // Create a graph given in the above diagram
    graph g;
    g.addedge(0, 1);
    g.addedge(0, 2);
    g.addedge(1, 2);
    g.addedge(2, 0);
    g.addedge(2, 3);
    g.addedge(3, 3);
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.dfs(2);
 
    return 0;
}