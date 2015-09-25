#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

typedef long long int ll;

void fastWrite(ll n)
{

char sum[20];
ll i=0;
do
{ sum[i++]=n%10+48;
  n=n/10;

}while(n!=0);

while(i>0)
{
  putchar(sum[--i]);

}
 putchar(' ');

}

inline void get(ll &x)

{
    register ll c = getchar();

    x = 0;

    ll neg = 0;

    for(;((c<48 || c>57) && c != '-');c = getchar());

    if(c=='-') {neg=1;c=getchar();}

    for(;c>47 && c<58;c = getchar()) {x = (x<<1) + (x<<3) + c - 48;}

    if(neg) x=-x;

}


int main()
{
    ll t;
    get(t);

    while(t--)
    {
        ll n,i;
        get(n);

        ll two=1,inp,count=0;
        for(i=0;i<n;i++)
        {
            get(inp);

            if(inp>two)
            {
                count=1;
                break;
            }
            two-=inp;
            two*=2;

        }

        if(count==0&&two==0)
        printf("Yes\n");
        else
            printf("No\n");
    }

}
