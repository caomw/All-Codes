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
        ll n,k;
        cin>>n>>k;

        ll count=0;
        if(k==1)
        {
            ll x,y;
cin>>x>>y;
            //ll sub=min(x,y)-1;
            //ll add=n-max(x,y);
            ll mini=min(x-1,min(y-1,min((n-x),(n-y))));
            //count+=add-sub;
            count=mini*2+n;

        }

            cout<<(n*n-count)<<endl;
    }
}
