#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin>>n;

    ll t=n;
    while(true)
    {
        if(n<=1)
        {
            cout<<"TAK\n";
            break;
        }

        if(n&1)
            n=3*n+3;
        else
            n/=2;

        if(n==t)
        {
            cout<<"NIE\n";
            break;
        }

    }
}
