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
	g.DFS(1);
	return 0;
	
}