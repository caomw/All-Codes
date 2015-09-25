//(҂>_<)
//<,︻╦╤─ ҉ - - - - - -- -- ---- -- ----- --
// /﹋\" BRATATATATATAT!!

#include<cmath>
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


/*
long long int func(long long int num,long long int p,long long ){
    if(num>1){

            if(func(num-1,long long int p)*pow(num,num)==0)
                return 1;
            else
                return(func(num-1,long long int p)*pow(num,num));
    }
    else return 1;
}
*/
int main()
{
    ll t;
    get(t);

    ll arr[100005],i=1,prod=1;

    while(t--)
        {
        ll n,m,q;
        get(n);get(m);get(q);

            while(true)
            {

                if(i==100006)
                    break;
                prod*=(int(ceil(pow(i,i)))%m);
                arr[i] = prod;
                i++;
            }


        while(q--)
            {
            ll p;
            get(p);

            ll ans;

            if(n-p==1)
                fastWrite((n*n)%m);
            else if(n==p)
            {
                ans=1;
                fastWrite(ans%m);
            }
            else
            {
                ans=arr[n]/(arr[p]*arr[n-p]);
                fastWrite(ans%m);
            }
        }
    }
}
