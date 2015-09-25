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

ll Find(ll arr[],ll n,ll ind)
{
    ll i,ans[n+5],k=0;

    ans[0]=0;

    for(i=1;i<n;i++)
    {
    if(k+1>=n)
    break;
        ll a=arr[k],b=arr[k+1];

        if(a>=b)
        {
        ans[i]=arr[k]+ans[i-1];
        k+=2;
        }
        else
        {
        ans[i]=arr[k+1]+ans[i-1];
        k+=3;
        }
    }

    return ans[i-1];
}





int main()
{

    std::ios::sync_with_stdio(0);
    ll p;
    cin>>p;

for(ll t=1;t<=p;t++)
{
    ll n;
    cin>>n;

    ll arr[n+5];
    for(ll i=0;i<n;i++)
        cin>>arr[i];

    arr[n]=0;
    arr[n+1]=0;
    arr[n+2]=0;

    cout<<"Case "<<t<<": "<<Find(arr,n,0)<<"\n";
}
}

