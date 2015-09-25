#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll e;
    cin>>e;

    for(ll t=1;t<=e;t++)
    {
        ll n,q,flag=1;
        cin>>n>>q;

        map<ll,ll> male,fmale;
        while(q--)
        {
            ll a,b;
            cin>>a>>b;

            if(fmale[a])
            {
                if(fmale[b])
                flag=0;
                else
                male[b]=1,fmale[b]=0;

            }
            else if(male[a])
            {
                if(male[b])
                flag=0;
                else
                fmale[b]=1,male[b]=0;
            }
            else if(fmale[b])
            {
                if(fmale[a])
                flag=0;
                else
                male[a]=1,fmale[a]=0;

            }
            else if(male[b])
            {
                if(male[a])
                flag=0;
                else
                fmale[a]=1,male[a]=0;
            }
  /*          else
            {
                male[a]=1;
                fmale[b]=1;
            }

            cout<<male[a]<<" "<<fmale[a]<<" "
            <<male[b]<<" "<<fmale[b]<<"\n";
*/
        }

        cout<<"Scenario #"<<t<<":\n";
        if(flag)
        cout<<"No suspicious bugs found!\n";
        else
        cout<<"Suspicious bugs found!\n";
    }
}
