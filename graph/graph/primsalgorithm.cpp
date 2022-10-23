#include<bits/stdc++.h>
using namespace std;
#define v 5
int minkey(int dis[],bool mstset[])
{
	int minimum=INT_MAX;
	int vertex;
	for(int v=0;v<y;v++)
	{
		
	}
}
void primmst(int graph[v][v])
{
	int parent[v];
	bool mstset[v];
	int dis[v];
	
	for(i=0;i<v;i++)
	{
		dis[i]=INT_MAX;
		mstset[i]=false;
	}
	
	dis[0]=0;
	parent[0]=-1;
	//form mst with (v-1) edges
	for(int i=0;i<v-1;i++)
	{
		int u = minkey(dis,mstset);
	    mstset[u]=true;
	    
	    for(int j=0;j<v;j++)
	    {
	    	//edge is present from u to j
	    	//vertex j is not included in mst
	    	//edge weight is smaller than current edge weight
	    	
	    	if(graph[u][j]!=0 && setmst[j]==false && graph[u][j]<value[j])
	    	{
	    		value[j]=graph[u][j];
	    		parent[j]=u;
	    		
	    		
			}
			
			printmst(parent,graph);
		}
	}
}
int main()
{
	int graph[v][v]={{0,2,0,6,0},
	                  {2,0,3,8,5},
					{0,3,0,0,7},
					{6,8,0,0,9},
					{0,5,7,9,0}
					};
					
					primmst(graph);
					
					
}