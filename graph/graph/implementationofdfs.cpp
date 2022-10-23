#include<iostream>
#include<vector>
using namespace std;

void dfs(int s,vector<int> g[],bool *vis)
{

	vis[s]=true;
	cout<<s<<" ";
	for(int i=0;i<g[s].size();i++)
	{
		if(vis[g[s][i]]==false)
		dfs(g[s][i],g,vis);
		
	}
}


int main()
{
	int n,e;
	cin>>n>>e;
	
	vector<int> g[n];
	bool vis[n];
	
	for(int i=0;i>e;i++)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	
	dfs(0,g,vis);
	
	cout<<endl;
	
}