#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll vis[1000000];
int main()
{

    std::ios::sync_with_stdio(0);
    ll t;
    cin>>t;

while(t--)
{
    ll n;
    cin>>n;

    ll arr[n+5],sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    ll av=sum/n;

    if(n*av==sum)
    {
        ll counti=0;
        for(ll i=0;i<n;i++)
        {
            counti+=abs(av-arr[i]);
        }
        cout<<counti<<"\n";
    }
    else
    cout<<"-1\n";
}
}

