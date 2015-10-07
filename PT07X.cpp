#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll vis[100005],count[100005];

struct Graph
{
    ll V;
    list<ll> *adj;

public:
    Graph(ll V);
    void addEdge(ll v,ll w);

};

Graph::Graph(ll V)
{
    this->V = V;
    this->adj = new list<ll>[V];
}

void Graph::addEdge(ll v,ll w)
{

    cout<<v<<" =v w="<<w<<"\n";
    adj[v].push_back(w);
    adj[w].push_back(v);

}

void markVis(list<ll> adj[],ll v)
{
    list<ll>::iterator it=adj[v].begin();

    for(;it!=adj[v].end();it++)
        vis[*it]=1,cout<<(*it)<<"=marked\n";
}
main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
    ll V;
    cin>>V;

    Graph graph(V);
    
    map<ll,ll> mapi;
    for(ll i=1;i<V;i++)
    {
        ll e1,e2;
        cin>>e1>>e2;
        
        graph.addEdge(e1,e2);
        //cout<<e1<<" =e1 e2="<<e2<<"\n\n";
        count[e1]++;
        count[e2]++;

        //cout<<mapi[e1]<<" "<<mapi[e2]<<" =mapi\n";
    }

    map<ll,ll>::iterator it = mapi.begin();

    ll counti=0,x=0,temp[V+5];
    for(it;it!=mapi.end();it++)
    {
        temp[x++]=(*it).first;
        cout<<temp[x-1]<<" "<<(*it).second<<" ";
    }
    
    for(ll v=x-1;v>=0;v--)
    {
        if(!vis[temp[v]]&&temp[v])
        {
            cout<<temp[v]<<"=v\n";
            //markVis(graph.adj,temp[v]);
            counti++;
        } 
    }

    cout<<counti;
	return 0;
}