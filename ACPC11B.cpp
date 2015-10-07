#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n1;
        cin>>n1;

        ll arr1[n1+5];
        for(ll i=0;i<n1;i++)
        cin>>arr1[i];

        ll n2;
        cin>>n2;

        ll arr2[n2+5];
        for(ll i=0;i<n2;i++)
        cin>>arr2[i];

        sort(arr1,arr1+n1);
        sort(arr2,arr2+n2);

        ll mini=LONG_LONG_MAX;
        if(n1<n2)
        for(ll i=0;i<n1;i++)
        {
            ll ind=lower_bound(arr1,arr1+n1,i)-arr1;//<<"\n";
            if(mini>-arr2[i]+arr1[ind])
            mini=-arr2[i]+arr1[ind];
            //cout<<arr2[i]-arr1[ind]<<" "<<ind<<"\n";
        }
        else
        for(ll i=0;i<n2;i++)
        {
            ll ind=lower_bound(arr2,arr2+n1,i)-arr2;//<<"\n";
            if(mini>-arr1[i]+arr2[ind])
            mini=-arr1[i]+arr2[ind];
            //cout<<arr2[i]-arr1[ind]<<" "<<ind<<"\n";
        }
        cout<<mini<<"\n";
    }
}
