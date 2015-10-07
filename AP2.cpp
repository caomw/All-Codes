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
        ll a,b,sum;
        cin>>a>>b>>sum;

        float n=sum;
        n/=(a+b)/2;


        cout<<n<<"\n";

        float d=(b-a)/(n-5);
        ll A=a-2*d;

        for(ll i=0;i<n;i++)
        cout<<A+i*d<<" ";
        cout<<"\n";
    }
}
