#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    std::ios::sync_with_stdio(0);
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,flag=0,num;
        cin>>n;

        map<ll,ll> mapi;

        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;

            mapi[a]++;

            if(mapi[a]>n/2)
            {
                flag=1;
                num=a;
                //break;
            }
        }

        if(flag)
        cout<<"YES "<<num;
        else
        cout<<"NO";
        cout<<"\n\n";
    }
}
