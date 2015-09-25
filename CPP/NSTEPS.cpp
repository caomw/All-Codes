#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;

    cin>>t;

    while(t--)
    {
        ll l,r;
        cin>>l>>r;

        if(l==r)
        {
            if(l&1)
            {
                cout<<2*l-1;
            }
            else
                cout<<2*l;
        }
        else if(l-r==2)
        {
            if(l&1)
            {
                cout<<2*r+1;
            }
            else
                cout<<2*r+2;
        }
        else cout<<"No Number";
        cout<<"\n";
    }
}
