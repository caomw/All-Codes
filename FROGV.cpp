//(Ò�>_<)
//<,ï¸»â�¦â�¤â�� Ò� - - - - - -- -- ---- -- ----- --
// /ï¹�\" BRATATATATATAT!!

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
    ll n,k,p;
    get(n);get(k);get(p);

    ll arr[n+5],st[100005],j=0,flag=0;
    map<ll,ll> mapi;
    for(ll i=0;i<n;i++)
    {
        get(arr[i]);
        mapi[arr[i]]=i;
    }
    arr[n]=1000000000000;

    sort(arr,arr+n+1);

    st[j++]=mapi[arr[0]];
//0 3 5 8 12

    //if(arr[1]-arr[0])
        //st[j++]=mapi[arr[0]];

    for(ll i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]<=k)
        {
            st[j++]=mapi[arr[i]];
            //flag=1;
/*
            if(arr[i+1]-arr[i]>k)
                st[j++]=mapi[arr[i]];
                */
        }

        if(arr[i]-arr[i-1]>k)//&&flag==1)
        {
            st[j++]=-1;
            st[j++]=mapi[arr[i]];
            //flag=0;
        }
    }

/*
    for(int i=0;i<j;i++)
        cout<<st[i]<<" ";
*/

        while(p--)
        {
            ll a,b,flag=0;
            get(a);get(b);
            a--;b--;

            ll q1=min(a,b),w=max(a,b);
            a=q1;b=w;

            for(ll i=0;i<j;i++)
            {
                if(flag==0&&st[i]==a)
                {
                    flag=1;
                }
                if(flag==1)
                {
                    if(st[i]==-1)
                    {
                        flag=0;
                        break;
                    }

                    if(st[i]==b)
                    {
                        flag=2;
                        break;
                    }
                }
            }
            if(flag==2)
                printf("Yes\n");
            else
                printf("No\n");
        }
}
