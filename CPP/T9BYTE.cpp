#include<iostream>
#include<cstring>
#include<algorithm>
typedef long long int ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;

    ll arr[t+5],temp=t;
    while(t--)
    {
        arr[t]=0;
        char c[100000];
        cin>>c;

        ll tens=1,a;
        for(ll i=strlen(c)-1;i>=0;i--)
        {


            if(c[i]>='a'&&c[i]<='c')
            a=2;
            else if(c[i]>='d'&&c[i]<='f')
            a=3;
            else if(c[i]>='g'&&c[i]<='i')
            a=4;
            else if(c[i]>='j'&&c[i]<='l')
            a=5;
            else if(c[i]>='m'&&c[i]<='o')
            a=6;
            else if(c[i]>='p'&&c[i]<='s')
            a=7;
            else if(c[i]>='t'&&c[i]<='v')
            a=8;
            else if(c[i]>='w'&&c[i]<='z')
            a=9;
            else if(c[i]=='.'||c[i]==','||c[i]=='?')
            a=1;
            else if(c[i]==' ')
            a=0;

            arr[t]+=a*tens;
            tens*=10;

        }
    }

    sort(arr,arr+temp);

    ll counti=0;
    for(ll i=1;i<temp;i++)
    {
        if(arr[i]==arr[i-1])
        counti++,i++;
    }
    cout<<counti;
}
