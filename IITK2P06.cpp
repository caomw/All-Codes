//(҂>_<)
//<,︻╦╤─ ҉ - - - - - -- -- ---- -- ----- --
// /﹋\" BRATATATATATAT!!

#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
#include<climits>

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
ll x,y,flag=0;
ll getCount(ll e,ll o)
{
    float O=o,E=e;
    if(e<1||o<1)
        return INT_MAX;

    double rati=O/E;
    //printf(".2f\n",rati);
    //cout<<rati<<"\n";
    if(rati==1.5)
        return 0;

    if(e>o)
        return getCount(e-1,o+1)+1;
    else if(e<o)
        return 1+getCount(e+1,o-1);
    else
        return -1;
}
// 4 6
int main()
{
    ll t;
    get(t);

    while(t--)
    {
        ll e,o;
        get(e);get(o);
        ll sum=o+e;
        ll E=2*sum/5;
        ll O=3*sum/5;
        if(E+O!=sum)
            printf("-1\n");
        else
            printf("%lld\n",abs(E-e));
    }
}
