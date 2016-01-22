#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX  100001
ll tree[MAX+5];

ll findSum(ll pos)
{
    ll sum = 0;
	while(pos)
	{
		sum+=tree[pos];
		pos-=(pos&-pos);
	}

	return sum;
}

ll update(ll pos,ll val)
{
	while(pos<=MAX)
	{
		tree[pos]+=val;
		pos+=(pos&-pos);
	}
}

main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

//	std::ios::sync_with_stdio(0);
//	cin.tie(0);

	ll t;
	cin>>t;

	while(t--)
	{
		ll n;
		cin>>n;

		ll arr[n+5],pos[n+5];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			pos[i]=arr[i];
		}

		sort(arr,arr+n);
		for(ll i=0;i<n;i++)
			pos[i]=lower_bound(arr,arr+n,pos[i])-arr;
		
		ll sum=0;
		memset(tree,0,sizeof(tree));

		for(ll i=0;i<n;i++)
		{
			sum+=findSum(pos[i]);
			update(pos[i]+1,arr[pos[i]]);
		}

		cout<<sum<<"\n";
	}
}