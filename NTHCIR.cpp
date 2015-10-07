#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;

ld descartes(ld r1,ld r2,ld rn_1)
{
    r1=1/r1;
    r2=1/r2;
    rn_1=1/rn_1;

    ld a4=r1+r2+rn_1+2*sqrt(r1*r2+r2*rn_1+rn_1*r1);
    return 1/a4;
}

main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\mrmoh\\Desktop\\input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

    std::ios::sync_with_stdio(0);

    ll t;
    cin>>t;

    for(ll i=1;i<=t;i++)
    {
        ll p,m,b;
        ll n0;
        cin>>n0>>p>>m>>b;

        for(ll i=0;i<t;i++)
        {
            n0=(p*n0)%m+b;
        }

        ld r[4];
        cin>>r[0]>>r[1]>>r[2]>>r[3];

        ld rn_1=r[3];

        for(ll i=0;i<n0-4;i++)
        {
            rn_1=descartes(r[0],r[1],rn_1);
        }
        cout<<rn_1<<"\n";


    }

}
