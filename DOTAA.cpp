#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll dp[2005][2005];
int main()
{
    std::ios::sync_with_stdio(0);
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,obs,pow;
        cin>>n>>obs>>pow;

        ll arr[n+5];
        for(ll i=0;i< n;i++)
        cin>>arr[i];

        sort(arr,arr+n);

        ll counti=0,flag=0;
        for(ll i=n-1;i>=0;i--)
        {
            if(counti>=obs)
            {
                flag=1;
                break;
            }
            if(arr[i]/pow)
            {
                counti+=arr[i]/pow;
                arr[i]%=pow;

                if(!arr[i])
                counti--,arr[i]=pow;

            }
        }
/*
cout<<"\n";
        for(ll i=0;i< n;i++)
        cout<<arr[i]<<"\n";
cout<<"\n";

*/

        if(flag)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}


