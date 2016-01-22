#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

const ll M = 50005;

vector<pair<ll,ll> > offers[M];
ll sc[M],bp[M],p[M],bst[M];

void init()
{
	for(ll i=0;i<M;i++)
	{
		offers[i].clear();
		sc[i]=0;
	}
}

ll find(ll x)
{
	if(p[x]==x)
		return x;

	return find(p[x]);
}

void merge(ll x,ll y)
{
	ll px = find(x);
	ll py = find(y);

	bst[py] = max(bst[py],bst[px]);

	p[px] = py;
}


int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(0);

	ll t;
	cin>>t;

	while(t--)
	{
		init();
		cin>>n>>m;
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			sc[x]++;
		}

		for(ll i=0;i<m;i++)
		{
			ll x,y,day;
			cin>>day>>x>>y;

			offers[day].push_back(make_pair(x,y));
		}

		for(ll i=m-1;i>=0;i--)
		{
			for(ll j=0;j<offers[i].size();j++)
			{
				ll x = offers[i][j].first;
				ll y = offers[i][j].second;
				p[x] = x;
				p[y] = y
			}
		}
	}
}