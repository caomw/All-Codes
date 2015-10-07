#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Graph
{
public:
    ll v;
    vector<ll> edge[100000];
    Graph(ll v);
    void addEdge(ll st,ll ed);
    ll bfs(ll v);
};

Graph::Graph(ll v)
{
    this->v = v;
}

void Graph::addEdge(ll st,ll ed)
{
    this->edge[st].push_back(ed);
    this->edge[ed].push_back(st);
}

ll Graph::bfs(ll v)
{
    ll visited[100000];
    for (ll i=0;i<v;i++)
        visited[i]=0;

    visited[v] = 1;
    ll maxi=0;

    deque<ll> list;
    list.push_back(v);
  /*  while(list.size())
    {
        auto it = list.begin();
        visited[*it]=1;

        for(auto it1 = this->edge[*it].begin();it1!=this->edge[*it].end();it1++)
        {
            if(!visited[*it1])
            {
                visited[*it1]=1;
                list.push_back(*it1);
                maxi++;
            }
        }

        list.pop_front();
    }
*/
    return maxi;
}


int main()
{
    ios::sync_with_stdio(0);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    ll n,maxi=0;
    cin>>n;

    Graph graph(n);

    for (ll i=0;i<n-1;i++)
    {
        ll st,ed;
        cin>>st>>ed;
        st--;ed--;
        graph.addEdge(st,ed);
    }
    for (ll i=0;i<n;i++)
        maxi = max(maxi,graph.bfs(i));
    
    cout<<maxi;
}