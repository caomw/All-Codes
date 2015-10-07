#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007;

ll modExp(ll base,ll exp)
{
    ll ans=1,mul=1;
    while(exp)
    {
        if(exp&1)
        {
            ans*=base%mod;
        }
        base*=base%mod;
        base%=mod;
        exp/=2;
        //cout<<base<<"=base\n";
    }

    return ans%mod;
}

main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
    ll t;
    cin>>t;

    while(t--)
    {
    	ll base,exp;
        cin>>base>>exp;

        cout<<modExp(base,exp)<<"\n";
    }
	return 0;
}