
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
    ll n;
    get(n);

    map<ll,ll> mapi;
    char s[1005][1005];

    for(ll k=0;k<n;k++)
    {
        scanf("%s",&s[k]);

        ll t;
        get(t);

        t+=100000000000;

        mapi[t]=k;
    }

    ll q;
    get(q);

    while(q--)
    {
        char s1[10000];
        scanf("%s",&s1);

        ll flag=1,flag1=1;

        map<ll,ll>::iterator it=mapi.end();
        it--;

        for(ll i=0;i<n;i++)
        {
            flag1=1;

            for(ll p=0;p<strlen(s1);p++)
            {
                if(s[mapi[(*it).first]][p]!=s1[p])
                {
                    flag1=0;
                    break;
                }
            }

            if(flag1)
            {
                printf("%s\n",s[mapi[(*it).first]]);
                flag=0;
                i=n+1;
                break;
            }
            it--;
        }

        if(flag)
            printf("NO\n");
    }
}
