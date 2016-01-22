#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
#define limit 1000005

ll visited[limit],a[limit];
	
void markMultiples(ll k,ll n)
{
	for(int i=2*k;i<=n;i+=k)
	{
		a[i]+=k;

		visited[i]=1;
	}
}

void seive(ll n)
{

	for(ll i=2;i<=n;i++)
			a[i]=1;

	for(ll i=2;i<=n;i++)
//		if(not visited[i])
			markMultiples(i,n);

}

main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	seive(limit);

	for(ll i=2;i<=limit;i++)
		a[i]+=a[i-1];

	ll t;
	cin>>t;
	
	while(t--)
	{
		ll n;
		cin>>n;

		cout<<a[n]<<"\n";
	}
}
