#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll mod = 1000000007;
ll power(ll a,ll b)
{
	if (b==1)
		return a;

	if(b&1)
	{
		ll base = (long long int)(a*(pow(power(a,(b-1)/2),2)))%mod;
		return base%mod;
	}
	else
	{
		ll base = (long long int)(pow(power(a,b/2),2))%mod;
		return base%mod;
	}
}

main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cout<<"hehe"<<" "<<power(2,mod-2)<<"\n";
	ll t;
	scanf("%lld",&t);

	while(t--)
	{
		ll n,x,m;
		scanf("%lld%lld%lld",&n,&x,&m);

		ll arr[n+5];
		for(ll i=0;i<n;i++)
			scanf("%lld",&arr[i]);

		ll pre = 1,sum=0;
		for(ll i=0;i<x;i++)
		{
			cout<<pre<<" "<<power(i+1,mod-2)<<"\n";
			sum = (sum+(pre*arr[x-i-1]))%mod;
			pre = (pre*(m+i))%mod;
			pre = (pre*power(i+1,mod-2))%mod;
		}

		printf("%lld\n",sum%mod );
	} 

}