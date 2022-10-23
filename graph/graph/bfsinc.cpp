#include<iostream>




void bfs(int g[][7],int start,int n)
{
	int i=start;
	struct queue q;
	int visited[7]={0};
	
	print("%d",i);
	visited[i]=1;
	
	enqueue(i);
	while(!isEmpty())
	{
		i=dequeue();
		for(int j=1;j<n;j++)
		{
			if(g[i][j]==1 && visited[j]==0)
			{
				printf("%d",j);
				visited[j]=1;
				enqueue(j);
				
			}
		}
	}
}

int main()
{
	int g[7][7]={{0,0,0,0,0,0,0},
	              {0,0,1,1,0,0,0},
				   {0,1,0,0,1,0,0},
				     {0,1,0,1,0,0,0}
					 {0,0,1,1,0,1,1},
					 {0,0,0,0,1,0,0},
					 {0,0,0,0,1,0,0}
					 };
					 
				bfs(g,1,7);
}