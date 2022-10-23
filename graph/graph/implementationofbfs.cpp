#include<iostream>
#include<map>
#include<bits/stdc++.h>
#include<list>
#include<queue>
using namespace std;

template<typename T>

class graph{
	//here we are creating a non weighted graph so we are ausing list 
	//value in the map is key
	map<T, list<T> > l;
	
	public:
		void addedge(int x,int y)
        //we want a bidirectional graph so we insert u node after that we insert v node or we push_back v node after it
		{
	       l[x].push_back(y);
	       l[y].push_back(x);
	       
		}	
		
		void bfs(T srcn)
		{
			map<T,int> visited;
			queue<T> q;
			
			q.push(srcn);
			visited[srcn]=true;
			
			while(!q.empty())
			{
				T node = q.front();
			    q.pop();
			     cout<<node<<" ";
			     for(int nbr:l[node]){
			     	if(!visited[nbr]){
			     		q.push(nbr);
			     		
			     		visited[nbr]=true;
			     		
					 }
				 }
			}
		}
		
		
};



int main()
{
	graph<int> g;
	g.addedge(0,1);
	g.addedge(1,2);
	g.addedge(2,3);
	g.addedge(3,4);
	g.addedge(4,5);
	
	
	g.bfs(0);
	
}