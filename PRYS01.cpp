#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,m;
        cin>>n>>m;

        cout<<(n/2+m-1)%n+1<<"\n";
    }
}
