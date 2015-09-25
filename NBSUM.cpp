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

        if(n&1)
        {
            n=(1-n)/2+n;
            cout<<n<<"\n";
        }
        else
            cout<<-n/2<<"\n";
    }

}
