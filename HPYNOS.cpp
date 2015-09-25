#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll hashi[1000],arr[1000];
int main()
{
    ll n,counti=1;
    cin>>n;

    ll sum=0;

    while(n)
    {
        ll t=n%10;

        sum+=t*t;
        n/=10;
     }

     n=sum;

    while(true)
    {
        if(hashi[n])
        {
            cout<<"-1\n";
            break;
        }
        else if(n==1)
        {
            cout<<counti<<"\n";
            break;
        }

        counti++;
        hashi[n]=1;

    sum=0;

    ll te=n;

    while(n)
    {
        ll t=n%10;
        sum+=t*t;
        n/=10;
     }

        n=sum;
    }


}
