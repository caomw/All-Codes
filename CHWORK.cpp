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

        ll arr[n+5],vis[n+5];
        arr[0]=0;
        for(ll i=1;i<=n;i++)
            cin>>arr[i],vis[i]=0;
        
        sort(arr,arr+n+1);
        ll mini=0,maxi=0;

        ll l=0,r=n;
        for(ll i=1;i<=n;i++)
        {
            mini+=arr[i]-arr[i-1];
        }

        ll node=0,i=1,flag=1;
        while(1)
        {
            if(vis[i])
                break;

            if(flag)
            {
                maxi+=abs(node-arr[n+1-i]);
                node=arr[n+1-i];
                vis[n+1-i]=1;
                flag=0;
            }
            else
            {
                maxi+=abs(node-arr[i]);
                node=arr[i];
                vis[i]=1;
                flag=1;
                i++;
            }
        }
        cout<<maxi<<" "<<mini<<"\n";

    }
	return 0;
}