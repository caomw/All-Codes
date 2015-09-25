#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



map<ll,ll> m;

ll findMax(ll n)
{
    if(n==0)
        return 0;

    ll a,b,c;
/*
    a=findMax(n/2);
    b=findMax(n/3);
    c=findMax(n/4);
*/
    if(m[n/2]!=0)
        a=m[n/2];
    else
        a=findMax(n/2);

    if(m[n/3]!=0)
        b=m[n/3];
    else
        b=findMax(n/3);

    if(m[n/4]!=0)
        c=m[n/4];
    else
        c=findMax(n/4);

    m[n/2]=a;
    m[n/3]=b;
    m[n/4]=c;

   // cout<<a<<" "<<b<<" "<<c<<"\n";

    return max(a+b+c,n);
}

int main()
{
    ll t=10;

    while(t--)
    {
        ll n;
        cin>>n;
        cout<<findMax(n)<<"\n";

    }
}
