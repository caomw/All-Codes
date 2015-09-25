#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    while(true)
    {
        ll n;
        cin>>n;

        //if(d==0.00)
          //  break;

        double sum=0;
        for(ll i=2;i<n;i++)
        {
            sum+=double(1/i);
            cout<<double(1/i)<<" ";
        }

        cout<<fixed<<setprecision(2)<<sum<<"\n";



    }
}
