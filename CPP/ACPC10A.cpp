#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
    while(true)
    {
        ll a,b,c;
        cin>>a>>b>>c;

        if(!a&&!b&&!c)
            break;

        if(b-a==c-b)
            cout<<"AP "<<c+b-a<<"\n";
        else
            cout<<"GP "<<c*(b/a)<<"\n";
    }
}
