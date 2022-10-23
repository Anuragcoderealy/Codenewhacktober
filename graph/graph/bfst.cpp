#include<bits/stdc++.h>
using namespace std;

void printbfs(int** edges,int n,int sv)
{
	queue<int> q;
	bool *visited=new bool[n];
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
	}
    q.push(sv);
	visited[sv]=true;
	while(!q.empty())
	{
		int currentvertex=q.front();
		q.pop();
		cout<<currentvertex<<endl;
		
		for(int i=0;i<n;i++)
		{
			if(edges[currentvertex][i]==1 && !visited[i])
			    q.push(i);
			    visited[i]=true;
			    
		}
	}
}
int main()
{
	int n,e;
	cout<<"\n enter the number of vertices \n";
	cin>>n;
	cout<<"\n enter the number of edges \n";
	cin>>e;
	
	int** edges=new int*[n];
	for(int i=0;i<n;i++){
		edges[i]=new int[n];
	
	for(int j=0;j<n;j++)
	{
		edges[i][j]=0;
	}
	
}
    for(int i=0;i<e;i++)
    {
    	int f,s;
    	cout<<"\n enter first vertex \n"<<endl;
    	cin>>f;
    	cout<<"\n enter second vertex \n"<<endl;
    	cin>>s;
    	edges[f][s]=1;
    	edges[s][f]=1;
    	
	}
	bool *visited=new bool[n];
	for(int i=0;i<n;i++)
	{
		visited[i]=0;
	}
	
	printbfs(edges,n,0);
}
