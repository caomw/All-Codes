
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
        ll n,s;
        get(n);get(s);

        ll count = 0,sum = n*(n+1)/2;
        ll diff = s-n;
        ll comp=1,compsum=0;

        while(diff>compsum)
        {
            compsum=comp(comp+1)/2;
            comp++;
        }

        cout<<comp;

    }
}
