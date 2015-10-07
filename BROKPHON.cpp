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

int main()
{
    ll t;
    get(t);

    while(t--)
    {
        ll n;
        get(n);

        ll arr[100005],count=0;
        get(arr[0]);
        get(arr[1]);

        if(arr[0]!=arr[1])
            {
                //cout<<"1 ";
                count++;
            }


        for(ll i=2;i<n;i++)
        {
            get(arr[i]);

            if(arr[i-2]!=arr[i-1]||arr[i]!=arr[i-1])
                {
                    count++;
                    //cout<<i<<" ";
                }

        }

        if(arr[n-1]!=arr[n-2])
        {
            //cout<<n-1<<" ";
            count++;
        }

        fastWrite(count);
    }
}
