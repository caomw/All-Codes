#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

map<ll,ll> mapi;

int main()
{
    std::ios::sync_with_stdio(0);

    ll t=0;
    cin>>t;

    ll counti=0;
    for(ll i=0;i<t;i++)
    {
        ll n,m;
        cin>>n>>m;
        mapi[n]=-1;

        for(ll i=0;i<m;i++)
        {
            ll a;
            cin>>a;

            if(mapi[a]!=-1)
            mapi[a]++;
//            cout<<mapi[a]<<
  //          "\n";
        }

    }

        map<ll,ll>::iterator it=mapi.begin();

        for(;it!=mapi.end();it++)
        {
        //cout<<(*it).first<<" "<<(*it).second<<"\n";
            if((*it).second>0)
            counti++;
        }
    cout<<counti;
}




