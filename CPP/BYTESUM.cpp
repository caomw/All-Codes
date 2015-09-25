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

	ll a,b,c1;
	if(ans[i+1][j+1]&&i+1>=r&&j+1>=c)
	a=ans[i+1][j+1];
	else
	a=get(ans,arr,r,c,i+1,j+1);

	if(ans[i+1][j]&&i+1>=r&&j>=c)
	b=ans[i+1][j];
	else
	b=get(ans,arr,r,c,i+1,j);

	if(ans[i+1][j-1]&&i+1>=r&&j-1>=c)
	c1=ans[i+1][j-1];
	else
	c1=get(ans,arr,r,c,i+1,j-1);

    ans[i][j] = arr[i][j]+max(max(a,b),c1);

    return ans[i][j];
}

int main()
{
    std::ios::sync_with_stdio(0);

    ll t;
    cin>>t;

    while(t--)
    {
        ll r,c;
        cin>>r>>c;

        ll arr[105][105],ans[105][105];

        for(ll i=0;i<r;i++)
        for(ll j=0;j<c;j++)
        cin>>arr[i][j],ans[i][j]=0;

        ll maxi=0;

        for(ll i=0;i<c;i++)
        {
            ll a;
            a = get(ans,arr,r,c,0,i);
            //cout<<a<<"\n";

          if(maxi<a)
          maxi=a;
        }
        cout<<maxi<<"\n";
    }
}


