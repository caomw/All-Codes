#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,d;
        cin>>n>>d;

        ll arr[n+5];

        cin>>arr[0];
        ll sum=0;

        for(ll i=1;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);

        for(ll i=n-1;i>=1;i--)
        {
            if(arr[i]-arr[i-1]<d)
            {
                /*
                cout<<arr[i]<<" "
                <<arr[i-1]<<"\n";*/
                sum+=arr[i];
                sum+=arr[i-1];
                i--;
            }
        }

        cout<<sum<<"\n";
    }
}

