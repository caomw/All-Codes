#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;

int main()
{

    while(true)
    {
        ll n;
        cin>>n;

        if(n==-1)
            break;

        ll arr[n+5],sum=0;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            arr[i]=a;

            sum+=a;
        }

        if(sum%n)
            cout<<"-1\n";
        else
        {
            ll av=sum/n;
            sum=0;

            for(ll i=0;i<n;i++)
            {
                if(arr[i]>av)
                    sum+=arr[i]-av;
            }
            cout<<sum<<"\n";
        }
    }
}

