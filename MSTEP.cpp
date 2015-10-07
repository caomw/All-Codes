#include<bits/stdc++.h>
using namespace std;
typedef int ll;

ll x[250005],y[250005];
     
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
        ll n;
        cin>>n;

        
        for(ll i=0;i<n;i++)
            for(ll j=0;j<n;j++)
                {
                    ll a;
                    cin>>a;

                    x[a]=i+1;
                    y[a]=j+1;

                }

        ll ans=0;
        for(ll i=1;i<n*n;i++)
                ans+=abs(x[i]-x[i+1])+abs(y[i]-y[i+1]);

        cout<<ans<<"\n";
    }
	return 0;
}