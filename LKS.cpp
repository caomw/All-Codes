#include <bits/stdc++.h>
using namespace std;
typedef int ll;

ll knap[2][2000005];

main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	ll W,n;
	scanf("%d%d",&W,&n);

	ll wt[n+5],val[n+5];

	for(ll i=0;i<n;i++)
		scanf("%d%d",&val[i],&wt[i]);

	ll i=0;
	while(++i<=n)
	 	{
	 		ll w=0;

	 		if(i&1)
			 	while(++w<=W)
			 	{
					if (w>=wt[i-1])
						knap[1][w] = max(knap[0][w],knap[0][w-wt[i-1]]+val[i-1]);
			 		else
		 				knap[1][w]=knap[0][w];
				}
			else
			{
				while(++w<=W)
				{
					if (w>=wt[i-1])
						knap[0][w] = max(knap[1][w],knap[1][w-wt[i-1]]+val[i-1]);
			 		else
		 				knap[0][w]=knap[1][w];
		 		}
		 	}

		}

	if (n&1)
		printf("%d\n",knap[1][W]);
	else
		printf("%d\n",knap[0][W]);

}