#include<stdio.h>
//#include<bits/stdc++.h>
//using namespace std;
typedef long long int ll;
#define mod 1000000007 //mod

ll maxi(ll a,ll b)
{
	if(a>b)
		return a;
	else
		return b;
}

ll mini(ll a,ll b)
{
	if(a<b)
		return a;
	else
		return b;
}

int main()
{
	    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

	ll t;
	scanf("%lld",&t);

	while(t--)
	{
		ll a,b,tim,psmax=0,pmax=0,smax,max;
		scanf("%lld%lld%lld",&a,&b,&tim);

		psmax=mini(a,b);
		pmax=maxi(a,b);

		smax=(pmax+psmax)%mod;
		max=(pmax+2*psmax)%mod;
		
		tim--;
		while(tim--)
		{
			//cout<<smax<<" "<<max<<"\n";

			ll t1=max;
			max+=(2*smax%mod);
			smax+=(2*pmax%mod);

			pmax=t1;

		}

		printf("%lld\n",max%mod);
	}
}