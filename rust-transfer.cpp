#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll self[3001][3001],bonus[3001][3001];

ll mini=INT_MAX;
ll dfs(ll st,ll ed, std::vector<std::vector<ll> > vec,ll vis[],ll cost=0)
{
	vis[st]=1;
	for(ll i=0;i<vec[st].size();i++)
	{
		if dist[vec[st][i]]<
	}
}
main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	ll t;
	scanf("%lld",&t);

	while(t--)
	{
		ll n,m;
		scanf("%lld%lld",&n,&m);

		std::vector<std::vector<ll> > vec;
		ll vis[n+1];

		for(ll i=0;i<=n;i++)
		{
			std::vector<ll> v;
			vis[i]=0;
			vec.push_back(v);
		}

		while(m--)
		{
			ll i,j;
			scanf("%lld%lld%lld%lld",&i,&j,&self[i][j],&bonus[i][j]);
			bonus[j][i] = bonus[i][j];
			self[j][i] = bonus[i][j];

			vec[i].push_back(j);	
			vec[j].push_back(i);
		}

		ll st,ed;
		scanf("%lld%lld",&st,&ed);
		dfs(st,ed,vec,vis);
	}
}