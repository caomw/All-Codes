#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    std::ios::sync_with_stdio(0);
    ll n,k;
    cin>>n>>k;

    ll arr[n+5];
    for(ll i=0;i<n;i++)
    cin>>arr[i];

    ll p=0,counti=0;
        for(ll i=n-1;i>=0;i--)
        {
    ll first=i,flag=1;

    for(ll m=2;m<=n;m++)
    {
            if(i+m>n||i>=n)
            break;
            for(ll j=i;j<i+m;j++)
            {

                cout<<arr[j]<<" ";

            for(ll ind=first;ind<j;ind++)
            if(arr[ind]%arr[j]==k&&flag&&j!=i)
            {
                flag=0;
                counti+=n-j;
                cout<<"\n"<<arr[ind]<<" "<<arr[j]<<
                " counti += "<<n-j<<"\n";
            }

            }

            cout<<"\n";
        }
            cout<<"\n";
    }
    cout<<(n*(n+1)/2)-counti;
}
