#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

map<ll,ll> mapi;

int main()
{
    std::ios::sync_with_stdio(0);

    ll t=0;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        if(mapi[n]==-1)
        {
            cout<<"No\n";
            continue;
        }
        else if(mapi[n]==1)
        {
            cout<<"Yes\n";
            continue;
        }


        ll root=sqrt(n);

        int flag=-1;
        for(ll i=0;i<=root;i++)
            {
                ll oth=n-(i*i);
                ll ort=sqrt(oth);

                if(ort*ort==oth)
                {
                    flag=1;
                    break;
                }
            }

        if(flag==1)
        cout<<"Yes\n",mapi[n]=1;
        else
        cout<<"No\n",mapi[n]=-1;
    }
}
