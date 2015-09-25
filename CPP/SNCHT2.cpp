
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;


int main()
{
    std::ios::sync_with_stdio(0);
    ll n,q;
    cin>>n>>q;

    ll arr[n+5];
    cin>>arr[0];

    for(ll i=1;i<n;i++)
    {
        ll a;
        cin>>a;
        arr[i]=arr[i-1]+a;
    }

    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        l--;r--;
        l--;

        //cout<<l<<" "<<r<<"\n";
        if(l<0)
            cout<<arr[n-1]-arr[r]<<"\n";
        else
        cout<<arr[n-1]-arr[r]+arr[l]<<"\n";
    }
}
