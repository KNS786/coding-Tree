#include<bits/stdc++.h>
using namespace std;

class Graph{
	public:
	int numvertices;
	   list<int>*adjacencyList;
	   bool * visited;
	   Graph(int vertex);
	   void addEdge(int vertex1,int vertex2);
	   void removeEdge(int vertex1 ,int vertex2);
	   void DFS(int vertex);
	   void BFS(int start);
	   void printresult(list<int>);
};
Graph::Graph(int vertex)
{
	numvertices=vertex;
	adjacencyList=new list<int>[vertex];
	visited=new bool[vertex];
}
void  Graph::addEdge(int vertex1,int vertex2)
{
	adjacencyList[vertex1].push_back(vertex2);
	adjacencyList[vertex2].push_back(vertex1);
	
}
void Graph::DFS(int vertex)
{
	visited[vertex]=true;
	list<int>adjList=adjacencyList[vertex];
	list<int>::iterator it;
	for(it=adjList.begin();it!=adjList.end();it++)
		if(!visited[*it])
			DFS(*it);
	
}
void Graph::BFS(int start)
{
	list<int>queue;
	queue.push_front(start);
	list<int>result;
	visited=new bool;
	visited[start]=true;
	int currentVertex;
	list<int>::iterator it;
	while(queue.size())
	{
		 currentVertex=queue.pop_front();
		 result.push_back(currentVertex);
		  for(it=adjacencyList[currentVertex].begin();it!=it.end();it++)
		  {
			  if(!visited[*it])
			  {
				  visited[*it]=true;
				  queue.push_back(*it);
				  
			  }
		  }
	}
	printresult(result);
}
void Graph::printresult(list<int>result)
{
	list<int>::iterator it;
	for(it=result.begin();it!=result.end();it++)
		 cout<<*it<<" ";
	 
}
int main()
{
	Graph g;
    g.addEdge(0,1);
	g.addEdage(0,2);
	g.addEdage(0,3);
	g.addEdage(1,2);
	g.addEdage(1,3);
	g.addEdage(2,3);
	g.addEdage(3,1);
	cout<<"BFS: "<<endl;
	g.DFS(1);
	cout<<"DFS: "<<endl;
	g.BFS(2);
	
	return 0;
	
}