#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

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
    	ll n,mini=LLONG_MAX;
        cin>>n;

        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;

            mini=min(a,mini);
        }

        cout<<mini*(n-1)<<"\n";
    }
	return 0;
}