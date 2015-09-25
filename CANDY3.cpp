#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,sum=0,u;
        cin>>n;

        u=n;
        while(u--)
        {
            ll a;
            cin>>a;
            sum+=a%n;
        }

        if(sum%n==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
