#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define mod 1000000007
 
ll fact[1000005],sum[1000005];
 
ll factIt()
{
    fact[0]=1;
    for(ll i=1;i<=1000005;i++)
        fact[i]=((fact[i-1]%mod)*i)%mod;
}
 
ll sumIt()
{
    sum[0]=1;
    for(ll i=1;i<=1000005;i++)
        sum[i]=(sum[i-1]%mod+fact[i]%mod)%mod;
}
 
main()
{
    ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
    ll t;
    cin>>t;
    factIt();
    sumIt();
 
    while(t--)
    {
        ll lef,rig;
        cin>>lef>>rig;
        cout<<(sum[rig]-sum[lef-1]+mod)%mod<<"\n";
    }
    return 0;
}