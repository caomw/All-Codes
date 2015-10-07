#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gwt=LONG_MAX;

class Graph
{
public:
	ll v;
	ll *wt;
	ll *visited;
	void resetVis();
	vector<ll> *edge;
	Graph(ll v);
	void addEdge(ll st,ll ed);
	ll bfs(ll v);
};

Graph::Graph(ll v)
{
	this->v = v;
	this->edge = new vector<ll>[v];
	this->visited = new ll[v];
	this->wt = new ll[v];

	for (ll i=0;i<v;i++)
		cin>>wt[i],visited[i]=0;
}

void Graph::addEdge(ll st,ll ed)
{
	this->edge[st].push_back(ed);
	this->edge[ed].push_back(st);
}

ll Graph::bfs(ll v)
{

	ll wt=this->wt[v];
	this->visited[v] = 1;

	list<ll> list;
	list.push_back(v);
	while(list.size())
	{
		auto it = list.begin();
		visited[*it]=1;

		for(auto it1 = this->edge[*it].begin();it1!=this->edge[*it].end();it1++)
		{
			if(!this->visited[*it1])
			{
				wt+=this->wt[*it1];
				this->visited[*it1]=1;
				list.push_back(*it1);
			}
		}

		list.pop_front();
	}

	gwt=min(gwt,wt);
	return wt;
}

void Graph::resetVis()
{
	ll *a;
	a=this->visited;

	memset(a,0,sizeof(a));

	for(ll i=0;i<this->v;i++)
		this->visited[i]=0;
	
	return;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("input.txt","r",stdin);
	freopen("output1.txt","w",stdout);

	ll n,q;
	cin>>n>>q;

	Graph graph(n);

	while(q--)
	{
		ll st,ed,minWt=LONG_MAX;
		cin>>st>>ed;
		st--;ed--;
		graph.addEdge(st,ed);

		gwt=LONG_MAX;
		for(ll i=0;i<n;i++)
		{
			if(!graph.visited[i])
				graph.bfs(i);
		}
		cout<<gwt<<"\n";
		graph.resetVis();
	}
}