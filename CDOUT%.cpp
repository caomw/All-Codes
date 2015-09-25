
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

        if(n%2&&k%2==0)
            n--;
        else if(n%2==0&&k%2)
            n--;

        cout<<(n+k)*((n-k)/2+1)/2<<"\n";
    }
}
