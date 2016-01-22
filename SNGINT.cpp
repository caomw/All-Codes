#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	ll t;
	scanf("%lld",&t);

	while(t--)
	{
		ll n;
		scanf("%lld",&n);

		if (n==1)
		{
			printf("-1\n");
			continue;
		}
		if (not n)
		{
			printf("10\n");
			continue;
		}

		ll c[100],k=0;
		for(ll i=9;i>=2;i--)
			while(n%i==0)
			{
				n/=i;
				c[k++]=i;
			}

		for(ll i=k-1;i>=0;i--)
			printf("%lld",c[i]);

		if (n!=1)
			printf("-1");

		printf("\n");

	}
}
