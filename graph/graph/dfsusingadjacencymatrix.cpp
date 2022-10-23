#include<iostream>
using namespace std;

void print(int **edges,int n,int sv,bool *visited)
{
	cout<<sv<<endl;
	visited[sv]=true;
	
	for(int i=0;i<n;i++)
	{
		if(i==sv)
		{
			continue;
		}
		if(edges[sv][i]==1)
		{
			if(visited[i])
			{
				continue;
			}
			print(edges,n,i,visited);
			
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
	
	print(edges,n,0,visited);
}