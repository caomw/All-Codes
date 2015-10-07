#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

while(1)
{

    ll W,n;
    cin>>W>>n;

    ll val[n+5],wt[n+5],knap[n+5][W+5],cost=0;

    if(!W||!n)
    break;

    for(ll i=0;i<n;i++)
    {
        cin>>wt[i];
        cin>>val[i];
    }

    for(ll i=0;i<=n;i++)
    {
        for(ll w=0;w<=W;w++)
        {
            if(i==0||w==0)
            knap[i][w]=0;

            else if(wt[i-1]<=w)
            knap[i][w]=max(val[i-1]+knap[i-1][w-wt[i-1]],
            knap[i-1][w]);

            else
            knap[i][w]=knap[i-1][w];

        }
    }

    cout<<knap[n][W]<<"\n";
    
}
}
