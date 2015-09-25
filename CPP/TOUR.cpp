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
 putchar('\n');

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

ll knapSack(ll wt[],ll val[],ll n,ll w)
{
    if(n==0||w==0)
        return 0;

    if(wt[n-1]>w)
        return knapSack(wt,val,n-1,w);

    return max(val[n-1]+knapSack(wt,val,n-1,w-wt[n-1]),
            knapSack(wt,val,n-1,w));
}

int main()
{
    ll w,n;
    get(w);get(n);

    ll wt[n+5],val[n+5];
    for(ll i=0;i<n;i++)
    {
        get(wt[i]);
        get(val[i]);
    }

    fastWrite(knapSack(wt,val,n,w));
}
