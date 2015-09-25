#include<bits/stdc++.h>
using namespace std;

struct Edge
{
	int src;
	int dst;
};

struct Graph
{
	int V,E;
	Edge* edge; 
};

Graph *createGraph(int v,int e)
{
	Graph* graph = new Graph;
	graph->V=e;
	graph->E=e;
	graph->edge = new Edge[e];

	return graph;
};

int find(int parent[],int i)
{
	if(parent[i]==-1)
		return i;

	return find(parent,parent[i]);
}

void Union(int parent[],int x,int y)
{
	int xpar=find(parent,x);
	int ypar=find(parent,y);
	parent[xpar]=ypar;
}

bool isCycle(Graph *graph)
{
	int parent[graph->V];
	memset(parent,-1,sizeof(parent));

	for(int i=0;i<graph->E;i++)
	{
		int xpar=find(parent,graph->edge[i].src);
		int ypar=find(parent,graph->edge[i].dst);

		if(xpar=ypar)
			return 1;

		Union(parent,xpar,ypar);
	}

	return 0;
}


// Driver program to test above functions
int main()
{
	
    /* Let us create following graph
         0
        |  \
        |    \
        1-----2 */
    
    struct Graph* graph = createGraph(3, 3);
 
    // add edge 0-1
    graph->edge[0].src = 0;
    graph->edge[0].dst = 1;
 
    // add edge 1-2
    graph->edge[1].src = 1;
    graph->edge[1].dst = 2;
 
    // add edge 0-2
    //graph->edge[2].src = 0;
    //graph->edge[2].dst = 2;
 
    if (isCycle(graph))
        printf( "Graph contains cycle" );
    else
        printf( "Graph doesn't contain cycle" );
 
    return 0;
    
}	