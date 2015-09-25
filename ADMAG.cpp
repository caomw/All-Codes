#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        ll te1=1,te2=2,counti=0;

        for(ll i=0;i<n;i++)
        {
            ll tem=te2;
            te2+=te1;
            te1=tem;
            counti++;
            if(n<te2)
            break;
        }


        if(n==1)
        cout<<"1\n";
        else
        cout<<counti+1<<"\n";
    }

}
