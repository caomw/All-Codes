#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;

ll get(ll ans[][105],ll arr[][105],ll r, ll c,ll i,ll j)
{

    if(ans[i][j])
    {
        return ans[i][j];
    }

    if(i>=r||j>=c)
    return 0;

    ans[i][j] = arr[i][j]+min(min(get(ans,arr,r,c,i+1,j+1),get(ans,arr,r,c,i+1,j))
            ,get(ans,arr,r,c,i+1,j-1));

    return ans[i][j];
}

int main()
{
    std::ios::sync_with_stdio(0);

    //ll t;
    //cin>>t;

//    while(t--)
    {
        ll r,c;
        cin>>r>>c;

        ll arr[105][105],ans[105][105];

        for(ll i=0;i<r;i++)
        for(ll j=0;j<c;j++)
        cin>>arr[i][j],ans[i][j]=0;

        ll maxi=LONG_LONG_MAX;

        for(ll i=0;i<c;i++)
        {
            ll a;
            a = get(ans,arr,r,c,0,i);
            cout<<a<<"\n";

          if(maxi>a)
          maxi=a;
        }
        cout<<maxi<<" m\n";
    }
}

