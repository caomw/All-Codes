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
#include<climits>

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


int main()
{
    ll t;
    get(t);

    while(t--)
    {
        ll m,n;
        get(m);get(n);

        ll add[m+5],sub[m+5],arr[m+5];
        memset(add,0,sizeof(add));
        memset(sub,0,sizeof(sub));
        memset(arr,0,sizeof(arr));


        while(n--)
        {
            ll l,r,k;
            get(l);get(r);get(k);

            add[l]+=k;
            r++;
            add[r]-=k;
        }

        ll gross=add[0];

        for(ll i=1;i<m+1;i++)
        {
            arr[i]+=gross;
            gross+=add[i];
            //cout<<arr[i]<<" ";
        }

        ll q;
        get(q);

        while(q--)
        {
            ll y;
            get(y);
            y++;
            fastWrite(arr[y]);
        }
    }
}
