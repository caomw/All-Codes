#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct Edge
{
    ll src,dst,wt;
};

struct Graph 
{
    ll V,E;
    Edge *edge;
};

Graph *createGraph(ll V,ll E)
{
    Graph *graph;
    graph->V = V;
    graph->E = E;

    graph->edge = new Edge[E];

    return graph;
}

ll findIt(ll parent[],ll i)
{
    if(parent[i]==-1)
        return i;

    return findIt(parent,i);
}

void Union(ll x,ll y,ll parent[])
{
    ll xroot=findIt(parent,x);
    ll yroot=findIt(parent,y);

    parent[xroot] = yroot;
}

int mycomp(const void* a,const void* b)
{
    Edge* a1 = (Edge *)a;
    Edge* a2 = (Edge *)b;

    return a1->wt > a2->wt;
}


ll KMST(Graph *graph)
{
    ll V = graph->V;
    ll E = graph->E;

    ll i=0;
    Edge result[E];

    qsort(graph->edge,graph->E,sizeof(graph->edge[0]),mycomp);

    ll parent[V];
    for(ll j=0;j<V;j++)
        parent[j]=-1;

    ll e=0,x=0;
//cout<<"asd\n";
    while(e<V-1)
    {
        Edge edge = graph->edge[i++];

        ll xroot=findIt(parent,edge.src);
        ll yroot=findIt(parent,edge.dst);

        if(xroot!=yroot)
        {
            x+=edge.wt;
            result[e++] = graph->edge[i++];
            Union(xroot,yroot,parent);
        }
    }

return x;

}


main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
       /* Let us create following weighted graph
             10
        0--------1
        |  \     |
       6|   5\   |15
        |      \ |
        2--------3
            4       */
    ll V = 4;  // Number of vertices in graph
    ll E = 5;  // Number of edges in graph
    struct Graph* graph = createGraph(V, E);
 
 
    // add edge 0-1
    graph->edge[0].src = 0;
    graph->edge[0].dst = 1;
    graph->edge[0].wt = 10;
 
    // add edge 0-2
    graph->edge[1].src = 0;
    graph->edge[1].dst = 2;
    graph->edge[1].wt = 6;
 
    // add edge 0-3
    graph->edge[2].src = 0;
    graph->edge[2].dst = 3;
    graph->edge[2].wt = 5;
 
    // add edge 1-3
    graph->edge[3].src = 1;
    graph->edge[3].dst = 3;
    graph->edge[3].wt = 15;
 
     // add edge 2-3
    graph->edge[4].src = 2;
    graph->edge[4].dst = 3;
    graph->edge[4].wt = 4;
 
    KMST(graph);
}