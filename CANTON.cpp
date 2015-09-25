#include<iostream>
using namespace std;
typedef long long int ll;

ll arra[10000005],arrb[10000005];

int main()
{
    ll t,lev=-1;
    cin>>t;

    arra[0]=1,arrb[0]=1;
    ll a=1,b=1,turn=1,flag=0;

    for(ll i=1;i<=10000005;i++)
    {
        a=arra[i-1];
        b=arrb[i-1];

        if(a==1&&turn)
        {
            arra[i]=arra[i-1];
            arrb[i]=arrb[i-1]+1;
            lev*=-1;
            turn=0;
        }
        else if(b==1&&turn)
        {
            arrb[i]=arrb[i-1];
            lev*=-1;
            arra[i]=arra[i-1]+1;
            turn=0;
        }
        else
        {
            arra[i]=arra[i-1]+lev;
            arrb[i]=arrb[i-1]-lev;

            if(arra[i]==1||arrb[i]==1)
            turn=1;

        }

        //cout<<arra[i]<<"/"<<arrb[i]<<"\n";
    }

    while(t--)
    {
        ll n;
        cin>>n;
        cout<<"TERM "<<n<<
        " IS "<<arra[n-1]<<"/"
        <<arrb[n-1]<<"\n";
    }
}

