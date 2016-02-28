#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll par[50005],d[50005];

ll find(ll i)
{
	if (par[i]==i)
		return par[i];

	d[i] +=d[par[i]];

	par[i] = find(par[i]);
	return 	par[i];
}

main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t,count;
	cin>>t;

	while(t--)
	{
		count=0;
		ll n,k;
		cin>>n>>k;

		for(ll i=0;i<=n;i++)
			par[i]=i,d[i]=0;

		while(k--)
		{
			ll state,x,y;
			cin>>state>>x>>y;
			state--;

			if (x>n or y>n)
			{
				count++;
				continue;
			}

			ll px = find(x),py=find(y);

			if(px==py)
			{
				ll temp = (d[x]-d[y])%3;
				
				if (temp<0)
					temp+=3;

				if(temp!=state)
					count++;
			}
			else
			{
				par[px]=py;
				ll i = (d[x]-d[y]-state)%3;
				d[px]=i<0? -i:-i+3;
			}
		}
		cout<<count<<"\n";
	}

}