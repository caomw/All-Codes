#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    std::ios::sync_with_stdio(0);

    ll n,m;
    cin>>n>>m;

    ll sum[n+5],ind;
    cin>>sum[0];
    for(ll i=1;i<n;i++)
    {
        ll a;
        cin>>a;
        sum[i]=a+sum[i-1];

        if(m>=sum[i])
        ind=i;
    }

    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {

        }
    }
}




