#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

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

        ll arr[n+5],mini=LLONG_MAX,maxi=0;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]);
        }

        cout<<maxi-mini<<"\n";

    }
	return 0;
}