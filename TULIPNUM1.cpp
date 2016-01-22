#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t;
	cout<<"asd";
	cin>>t;

	while(t--)
	{
		ll n,q;
		cin>>n>>q;

		ll arr[n+5];
		for (ll i=0;i<n;i++)
			cin>>arr[i];

		ll distinct[n+1];
		for(ll i=0;i<n;i++)
			distinct[i] = 0;

		for(ll k=2;k<1+n;k++)
		{
			distinct[k]=distinct[k-1];

			if(arr[k-1]!=arr[k-2])
				distinct[k]+=1;
		}

		while(q--)
		{
			ll l,r;
			cin>>l>>r;
			cout<<distinct[r]-distinct[l-1];
		}
	}
}