#include<iostream>
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
        ll n,cw;
        cin>>n>>cw;

        ll arr[n+5],cws[n+5];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            cws[i]=0;
        }

        sort(arr,arr+n);

        cw-=2;

        ll l=0,r=n-1;
        ll lmin=arr[0],rmin=arr[n-1];
        ll mini=abs(rmin-lmin);

        while(cw--)
        {

               ll mid=(r-l)/2;
               lmin=min(arr[mid]-arr[l],arr[r]-arr[mid]);
               rmin=min(arr[mid+1]-arr[l],arr[r]-arr[mid+1]);
                cout<<l<<" "<<r<<"\n";
// 1 2 4 8 9
            if(lmin>rmin)
            {
                r=mid;
                cout<<arr[mid]<<" a\n";
                mini=lmin;
            }
            else
            {
                mini=rmin;
                l=mid+1;
                cout<<arr[mid+1]<<" a\n";
            }
        }

        cout<<mini<<"\n";
    }
}
