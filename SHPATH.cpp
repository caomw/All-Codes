#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll wt[10005][10005];
ll cumuWt[10005];

ll st,ed,n;

void print(vector<std::vector<ll> > graph)
{
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<graph[i].size();j++)
			cout<<graph[i][j]+1<<" ";
		cout<<"\n";
	}

	cout<<"\n";
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n;j++)
			cout<<wt[i][j]<<" ";
		cout<<"\n";
	}

	cout<<"\n";

}

void dfs(vector<std::vector<ll> > graph,ll cost,ll st)
{

	for(ll i=0;i<graph[st].size();i++)
	{
		if (cumuWt[graph[st][i]]>cost+wt[i][graph[st][i]])
		{
			cumuWt[graph[st][i]] = min(cumuWt[graph[st][i]],cost+wt[i][graph[st][i]]);
			cout<<st+1<<" "<<graph[st][i]+1<<" "<<cost<<" "<<wt[st][graph[st][i]]<<"\n";
			dfs(graph,cumuWt[graph[st][i]],graph[st][i]);
		}
	}
}

main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);


	ll t;
	cin>>t;

	while(t--)
	{
		cin>>n;

		string cities[n+1];
		std::vector<std::vector<ll> > graph;

		for(ll i=0;i<n;i++)
		{
			cumuWt[i]=INT_MAX;
		
			for(ll j=0;j<n;j++)
			{
				wt[i][j]=INT_MAX;
			}
		}

		for(ll i=0;i<n;i++)
		{
			std::vector<ll> v;
			graph.push_back(v);
//			scanf("%s",&cities[i]);
			cin>>cities[i];

			ll neigh;
			cin>>neigh;

			for(ll j=0;j<neigh;j++)
			{
				ll ind,weight;
				cin>>ind>>weight;

				graph[i].push_back(ind-1);
				wt[i][ind-1] = weight;
			}
		}

		ll queries;
		cin>>queries;

		print(graph);

		while(queries--)
		{
			string ca,cb;
			cin>>ca>>cb;

			for(ll i=0;i<n;i++)
			{
				if(ca==cities[i])
					st=i;
				if(cb==cities[i])
					ed=i;
			}

			dfs(graph,0,st);
			cout<<cumuWt[ed]<<"\n";

			for(int i=0;i<n;i++)
				cout<<cumuWt[i]<<" ";
			cout<<"\n";
		}

	}
}
