#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll index1;
ll maxi=-INT_MAX;
ll n;

void bfs(ll src,ll vis[],vector<vector<ll> >graph)
{
  //  cout<<"src="<<src<<"\n";
    vis[src]++;
    for(ll i=0;i<graph[src].size();i++)
    {
        if(graph[src][i]==n)
        {
    //        cout<<n<<"\n";
            vis[n]++;
            return;
        }

        //else if (not vis[graph[src][i]])
        {
      //      cout<<graph[src][i]<<"\n";
            bfs(graph[src][i],vis,graph);
        }

    }
}

void findMax(ll src,ll vis[],vector<vector<ll> >graph)
{
    //cout<<src<<" "<<vis[src]<<"\n";
    for(ll i=0;i<graph[src].size();i++)
    {
        if (vis[graph[src][i]]==maxi)
        {
            //cout<<graph[src][i]<<" "<<vis[graph[src][i]]<<"=maxiIndex\n";
            index1 = graph[src][i];
            return;
        }
        else if(vis[graph[src][i]]!=-1)
        {
            //cout<<graph[src][i]<<"=not max\n";
            findMax(graph[src][i],vis,graph);
            vis[graph[src][i]] = -1;
        }
    }
}

int main()
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    #endif

    ll t;
    cin>>t;

    while(t--)
    {
        maxi=-INT_MAX;

        ll m;
        cin>>n>>m;

        std::vector<std::vector<ll> >graph;
        std::vector<std::vector<ll> >inv_graph;

        ll vis[n+1],inv_vis[n+1];
        for(ll i=0;i<=n;i++)
        {
            std::vector<ll> v;
            
            graph.push_back(v);
            inv_graph.push_back(v);

            vis[i]=0;
            inv_vis[i]=0;

        }

        while(m--)
        {
            ll a,b;
            cin>>a>>b;

            graph[a].push_back(b);
            inv_graph[b].push_back(a);
        }

        bfs(1,vis,graph);
        bfs(n,inv_vis,inv_graph);

        for(ll i=0;i<=n;i++)
        {
//            cout<<i<<" "<<vis[i]<<" "<<inv_vis[i]<<"\n";
            if (not (vis[i]*inv_vis[i]))
                vis[i]=-1;

            maxi = max(maxi,vis[i]);
//            cout<<vis[i]<<"\n";
        }

        findMax(1,vis,graph);

        cout<<index1<<"\n";

    }
}