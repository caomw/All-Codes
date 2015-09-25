#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        ll sum=0,arra[n+5],arrb[n+5];
        for(ll i=0;i<n;i++)
        {
            cin>>arra[i];
        }
        sort(arra,arra+n);


        for(ll i=0;i<n;i++)
        {
            cin>>arrb[i];
        }

        sort(arrb,arrb+n);


        for(ll i=0;i<n;i++)
        {
            arrb[i]*=arra[i];
            sum+=arrb[i];
        }

        cout<<sum<<"\n";
    }
}
