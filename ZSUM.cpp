#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 10000007 

ll findPow(ll base,ll exp)
{
	ll ans=1;
	base%=mod;
	while(exp)
	{
		if(exp%2)
		ans=(ans*base)%mod;
	exp/=2;
	base=(base*base)%mod;
	}

	return ans;
}

main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("/home/mark/Desktop/Codes/input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

    while(1)
    {
    	ll n,k;
    	cin>>n>>k;

    	if(!n&&!k)
    		break;

    	ll a=findPow(n,n);//
    	ll b=findPow(n,k);//
    	ll c=findPow(n-1,n-1);//
    	ll d=findPow(n-1,k);//<<"\n";

    	ll ans=(a+b+2*c+2*d)%mod;
    	cout<<ans<<"\n";


    }

	return 0;
}