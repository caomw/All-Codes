#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll lis[5000005],x;

bool vis[5000004];	

void mark(bool vis[],ll k,ll n)
{
	ll i=2;
	ll num = i*k;

	if(k%4==1)
		lis[k]=1;

	while((num=i*k)<=n)
	{
		vis[num-1]=1;
		if(k%4==1)
			lis[num]=1;
		i++;
	}

}

void seive(ll n)
{
	if (n>=2)
	{
//		memset(vis,0,sizeof(vis));

		for (ll i=1;i<n;i++)
			if (not vis[i])
				mark(vis,i+1,n);
	}
}


int main()
{
	ios::sync_with_stdio(0);
	/*
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	*/
	seive(1000004);

	/*for (ll i =1;i<100;i++)
		cout<<lis[i]<<"\n";
	*/ll t;
		scanf("%lld",&t);
	/*cin>>t;*/

	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		/*cin>>n;*/

		if (lis[n] or n==2)
			printf("YES\n");
		else
			printf("NO\n");
	}
}