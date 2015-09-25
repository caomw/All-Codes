
//(҂>_<)
//<,︻╦╤─ ҉ ---- -M-A-R-K-!!!-R-O-X-O-R- ------
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
#include<time.h>

using namespace std;

typedef long long int ll;

/*
clock_t begin, end;
double time_spent;

begin = clock();
// here, do your time-consuming job
end = clock();
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
*/

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
        ll n,q;
        get(n);get(q);

        ll arr[n+5],st[n+1],en[n+1];

        get(arr[0]);
        st[0]=arr[0];
        cout<<st[0]<<" ";
        for(ll i=1;i<n;i++)
        {
            get(arr[i]);
            st[i]=gcd(st[i-1],arr[i]);
            cout<<st[i]<<" ";
        }
        cout<<"\n";

        en[n-1]=arr[n-1];
        cout<<en[n-1]<<" ";

        for(ll i=n-2;i>-1;i--)
        {
            en[i]=gcd(en[i+1],arr[i]);
            cout<<en[i]<<" ";
        }


        while(q--)
        {
            ll l,r;
            get(l);get(r);
            l--;r--;

            if(l==0)
            {
                fastWrite(en[r+1]);
            }
            else if(r==n-1)
            {
                fastWrite(st[l-1]);
            }
            else
                fastWrite(gcd(st[l-1],en[r+1]));


        }
    }
}
