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
#define pb push_back
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
{char sum[20];ll i=0;do{ sum[i++]=n%10+48;n=n/10;}while(n!=0);while(i>0){ putchar(sum[--i]);} putchar('\n');}inline void get(ll &x){register ll c = getchar();x = 0;ll neg = 0;for(;((c<48 || c>57) && c != '-');c = getchar());
if(c=='-') {neg=1;c=getchar();}for(;c>47 && c<58;c = getchar()) {x = (x<<1) + (x<<3) + c - 48;}if(neg) x=-x;
}

int main()
{
    ll t;
    get(t);

    while(t--)
    {
        ll n,m,maxi=0,q,w;
        get(n);
/*
        get(m);
        n&=m;
        cout<<n<<"\n";
*/
        ll arr[n+5];
        for(ll i=0;i<n;i++)
            get(arr[i]);

        sort(arr,arr+n);

        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                ll an=arr[i]&arr[j];

                if(an>maxi)
                {
                    q=arr[i];
                    w=arr[j];
                    maxi=an;
                }
            }
        }
        cout<<q<<" "<<w<<"\n";
        fastWrite(maxi);

    }
}