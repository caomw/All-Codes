#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll findi(ll arr[],ll n,ll ind)
{
    if(ind>=n)
    return 0;

    //if(ind+2==n)
    return max(findi(arr,n,ind+1)
    ,arr[ind]+findi(arr,n,ind+2));
}
int main()
{

    std::ios::sync_with_stdio(0);
    ll t;
    cin>>t;

while(t--)
{
    ll n;
    cin>>n;

    ll arr[n+5];
    for(ll i=0;i<n;i++)
        cin>>arr[i];

    arr[n]=0;
    arr[n+1]=0;
    arr[n+2]=0;

    cout<<findi(arr,n,0)<<"\n";
}
}


