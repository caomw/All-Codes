#include<bits/stdc++.h>
using namespace std;

struct Graph
{
	int v;
	list<int> *edge;

	Graph *createGraph(int v,int e);
	void addEdge(int src,int dst);
};

Graph *createGraph(int v,int e)
{
	Graph *graph = new Graph;
	graph->v = v;
	graph->edge = new list<int>[e];

	return graph; 	
}

void addEdge(int src,int dst)
{

}


int main()
{

}

