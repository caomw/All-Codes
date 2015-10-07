#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,h;
        cin>>n>>h;

        ll arr[n+5];
        memset(arr,0,sizeof(arr));

        for(ll i=0;i<n;i++)
        {
            ll l,u;
            cin>>l>>u;

            arr[l]++;
            arr[u+1]--;

        }

        for(ll i=1;i<n;i++)
            arr[i]=arr[i-1]+arr[i];

        for(ll i=1;i<n;i++)
            arr[i]=arr[i-1]+arr[i];

        ll maxi=arr[h-1];
        for(ll i=h;i<n;i++)
        {
            ll sum=arr[i]-arr[i-h];
            if(maxi<sum)
            maxi=sum;
        }
        cout<<n*h-maxi<<"\n";

    }

}
