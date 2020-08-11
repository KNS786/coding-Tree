#include<bits/stdc++.h>
using namespace std;
vector<int>res;
class Graph{
	public:
	   list<int>*adjList;
	   bool * visited;
	   int addVertex(vertex)
	   {
		   adjList=new list<int>[vertex];
		   
	   }
	   void mst(int vertex)
	   {
		   while(adjList[vertex]!=vertex)
		   {
			 adjList[vertex]=adjList[adjList[vertex]];
             vertex=adjList[vertex];			 
		   }
		   return vertex;
	   }
	   void addEdge(int src,int dest)
	   {
		   adjList[src].push_back(dest);
	   }
	   int dfs(int vertex){
		   
		   list<int>result;
		   list<int>::iterator it1,it2;
		   list<int>aList=adjList[vertex];
		   it1=aList.begin();
		   it2=aList.end();
		   int first=it1;
		   int last=it2;
		   int currentVertex=adjList[vertex].pop_front();
			visited[currentVertex]=true;
			  while(first<last)
			  {
				  currentVertex=adjList[vertex].pop_front();
				
				    if(!visited[currentVertex])
					{
					   visited[currentVertex]=true;
					   result.push_back(currentVertex);
					}
			  }
			 return result[vertex];
		   
	   }
	   void Union(int vertex1,int vertex2)
	   {
		   int left=new Graph(vertex1);
		   int right=new Graph(vertex2);
		    adjList[left][left]=adjList[right][right];
			
	   }
	   void kruskal(pair<int,pair<int,int> > p[])
	   {
		   int first,second;
		   int weights,min_cost=0;
		   list<int>::iterator it;
		   for(int i=0;i<adjList.size();i++)
		   {
			   first=p[i].first;
			   second=p[i].second.second;
			   weights=p[i].first;
			   int dist,r;
              if(dfs(first)!=dfs(second))
			  {
				  weights+=cost;
				 dist=Union(first,second);
			  }
              r=mst(dist);
            res.push_back(r);			  
		   }
		  
		   
	   }
	    
};
int main()
{
	Graph g;
	g.addVertex(0);
	g.addVertex(1);
	g.addVertex(2);
	g.addVertex(3);
	g.addVertex(4);
	g.addEdge(0,1);
	g.addEdge(0,3);
	g.addEdge(0,4);
	g.addEdge(1,3);
	g.addEdge(1,4);
	g.addEdge(2,3);
	g.addEdge(3,2);
	g.addEdge(3,4);
	g.addEdge(4,0);
	
	pair<int,pair<int,int> > p[14];
	g.kruskal(p);
	vector<int>::iterator it;
	for(it=res.begin();it=res.end();it++)
		cout<<*it<<" ";
return 0;

	
}