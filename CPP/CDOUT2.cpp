#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        ll ans=n*k,ten=1;
        /*
        for(ll i=strlen(n)-1;i>-1;i--)
        {
            int dig=n[i]-'0';

            if(dig==k)
                ans+=(dig*2)*ten;
            else
                ans+=dig*k*ten;
            ten*=10;
        }*/

        while(n)
        {
            int dig=n%10;

            if(dig==k)
                ans+=(dig*2)*ten;
            else
                ans+=dig*k*ten;
            ten*=10;

            n/=10;

        }
        cout<<ans<<"\n";

    }
}
