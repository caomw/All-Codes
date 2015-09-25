#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
    std::ios::sync_with_stdio(0);
    ll n,sum=0;
    cin>>n;

    while(n--)
    {
        ll a;
        cin>>a;

        sum^=a;
    }

    cout<<sum;
}
