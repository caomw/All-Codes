#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);

    ll t;
    cin>>t;

    while(t--)
    {
        ll m,x,y;

        ll arr[101];
        memset(arr,0,sizeof(arr));
        cin>>m>>x>>y;

        ll visit=x*y;
        while(m--)
        {
            ll pos;
            cin>>pos;


            ll mini=1,maxi=100;
            mini=max(mini,pos-visit);
            maxi=min(maxi,pos+visit);
            maxi++;

            for(ll i=mini;i<maxi;i++)
                {
                    arr[i]=1;
                    //cout<<i<<" ";

                }
        }

        ll counti=0;
        for(ll i=1;i<=100;i++)
        {
            if(arr[i]==0)
                counti++;
        }

        cout<<counti<<"\n";
    }
}
