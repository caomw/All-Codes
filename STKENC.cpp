#include<iostream>
using namespace std;
typedef long long int ll;


int main()
{
    std::ios::sync_with_stdio(0);
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        n--;

        cout<<n/26+1<<"\n";
    }
}
