//(҂>_<)
//<,︻╦╤─ ҉ - - - - - -- -- ---- -- ----- --
// /﹋\" BRATATATATATAT!!
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
*/
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
int main()
{
    ll t;
    get(t);

    while(t--)
    {
        ll x,y,k,n;
        get(x);get(y);get(k);get(n);

        x-=y;

        int flag=0;
        for(ll i=0;i<n;i++)
        {
            ll p,c;
            get(p);get(c);

            if(p>=x&&c<=k)
                flag=1;
        }

        if(flag)
        printf("LuckyChef\n");
        else
        printf("UnluckyChef\n");
    }
}
