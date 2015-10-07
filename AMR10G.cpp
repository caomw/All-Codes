#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    std::ios::sync_with_stdio(0);
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        ll arr[n+5],mini=LONG_LONG_MAX;
        for(ll i=0;i<n;i++)
            cin>>arr[i];

        sort(arr,arr+n);
        for(ll i=0;i+k-1<n;i++)
        {
            //cout<<arr[i]<<" "<<arr[i+k-1]<<"\n";
            if(arr[i+k-1]-arr[i]<mini)
            mini=arr[i+k-1]-arr[i];
        }

        cout<<mini<<"\n";
    }
}
