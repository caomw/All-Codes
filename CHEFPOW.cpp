#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,two=1;
    cin>>n;

    while(n)
    {
        if(n%2)
            cout<<two<<" ";
        n/=2;

        two*=2;
    }

}
