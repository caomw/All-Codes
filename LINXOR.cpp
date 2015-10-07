#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll vis[1000000];
int main()
{

    std::ios::sync_with_stdio(0);
    ll t;
    cin>>t;

while(t--)
{
    ll a,b;
    cin>>a>>b;

    ll ans=(b >> 1) & 1 ^ (b&1 ? 1 : b);
    a--;
    ll temp=(a >> 1) & 1 ^ (a&1 ? 1 : a);
    temp^=ans;
    cout<<temp<<"\n";

}
}

