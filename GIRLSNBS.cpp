#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
    while(true)
    {

    ll a,g,b;
    cin>>g>>b;

    if(g==-1&&b==-1)
        break;

    if(min(g,b)==1)
        a= max(g,b)-max(g,b)/2;
    else if(min(g,b))
        a= max(g,b)%min(g,b);
    else
        a=max(g,b);

    if(!a&&min(g,b))
        a=max(g,b)/min(g,b);

    cout<<a<<"\n";

    }
}
