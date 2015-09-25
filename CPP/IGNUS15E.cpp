
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

ll sum(ll arr[],ll n,ll ans[])
{
    if(n<0)
        return 0;

    if(ans[n]!=0)
        return ans[n];

    ans[n]=max(arr[n]+sum(arr,n-2,ans),
               sum(arr,n-1,ans));

    return ans[n];
}

int main()
{
    ll t;
    get(t);

    while(t--)
    {
        ll n;
        get(n);

        ll arr[n+5],ans[n+5];

        ans[n]=-1;
        for(ll i=0;i<n;i++)
        {
            get(arr[i]);
            ans[i]=0;
        }

        fastWrite(sum(arr,n-1,ans));
    }
}
