#include<iostream>
#include<cmath>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        b=b%10;

        if(b==0)
        cout<<"1\n";
        else if(a%10==0)
        cout<<"0\n";
        else if(a%10==1)
        cout<<"1\n";
        else if(a%10==2)
        {   b%=4;
            if(b)
            cout<<int(pow(2,b))%10<<"\n";
            else
            cout<<"6\n";
        }else if(a%10==3)
        {   b%=4;
            if(b)
            cout<<int(pow(3,b))%10<<"\n";
            else
            cout<<"1\n";
        }else if(a%10==4)
        {
            if(b&1)
            cout<<int(pow(4,b))%10<<"\n";
            else
            cout<<"6\n";
        }else if(a%10==5)
        cout<<"5\n";
        else if(a%10==6)
        cout<<"6\n";
        else if(a%10==7)
        {   b%=4;
            if(b)
            cout<<int(pow(7,b))%10<<"\n";
            else
            cout<<"1\n";
        }else if(a%10==8)
        {   b%=4;
            if(b)
            cout<<int(pow(8,b))%10<<"\n";
            else
            cout<<"6\n";
        }else if(a%10==9)
        {
            if(b&1)
            cout<<"9\n";
            else
            cout<<"1\n";
        }
    }
}
