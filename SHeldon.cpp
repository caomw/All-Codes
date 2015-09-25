#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    std::ios::sync_with_stdio(0);
    ll n;
    cin>>n;

    ll arr[n+5];
    for(ll i=0;i<n;i++)
        cin>>arr[i];

    ll x,sum=0,flag=1;
    cin>>x;

    for(ll i=0;i<n;i++)
    {
        sum=arr[i];
        for(ll j=i+1;j<n;j++)
        {
            sum+=arr[j];
            if(sum<x)
            {
                for(ll k=j+1;k<n;k++)
                {
                    sum+=arr[k];
                    if(sum==x)
                    {
                        cout<<"True\n"
                        ;flag=0;
                        j=n;k=n;i=n;
                    }
                    sum-=arr[k];
                }
            }
                sum-=arr[j];
        }
    }
/*
6
1
4
45
6
10
8
22
*/
    if(flag)
        cout<<"False\n";

}
