//(҂>_<)
//<,︻╦╤─ ҉ - - - - - -- -- ---- -- ----- --
// /﹋\" BRATATATATATAT!!
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
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
 //putchar(' ');

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

ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    ll t;
    get(t);

    while(t--)
    {
        ll n;
        get(n);

        ll a,mini;
        get(a);
        mini=a;
        n--;
        while(n--)
        {
            ll b;
            get(b);
            a=gcd(a,b);

            if(mini>b)
            {
                mini=b;
            }
        }

        if(a!=mini)
        {
            putchar('-');
            putchar('1');
        }
        else
        fastWrite(a);
        putchar('\n');
    }
}
