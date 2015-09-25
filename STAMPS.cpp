#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;

    for(ll i=1;i<=t;i++)
    {
        cout<<"Scenario #"<<i<<":\n";
        ll m,n;
        cin>>m>>n;

        ll arr[n+5];
        for(ll i=0;i<n;i++)
            cin>>arr[i];

        sort(arr,arr+n);

        ll counti=0,sum=0;
        for(ll i=n-1;i>=0;i--)
        {
            counti++;
            sum+=arr[i];

            if(sum>=m)
                break;
        }

        if(sum>=m)
            cout<<counti<<"\n\n";
        else
            cout<<"impossible\n\n";
    }
}

