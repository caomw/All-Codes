#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll mod = 1000000007;


ll findPow(ll base,ll exp){
    ll ans=1;
    base%=mod;
    while (exp){
            if(exp%2)
                ans=(ans*base)%mod;
        
            exp/=2;
            base=(base*base)%mod;}
    return ans;
}

int main()
{

    ios::sync_with_stdio(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    #endif

    ll t;
    cin>>t;
    
    while(t--){
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<"1\n";
            continue;
        }

        ll ans = ((13*findPow(3,n-2)) - 1);
    
        ans *=500000004;
        cout<<(ans-findPow(2,n-1)+mod)%mod<<"\n";        
    }
}