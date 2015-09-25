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




void qsort(ll* d, int l, int r) {
	int ll, rr, p, a;
	if (r > l) {
		ll = l;
		rr = r;
		p = d[(rr + ll) >> 1];
		while (ll <= rr) {
			while (ll < r && d[ll] < p)
				++ll;
			while (rr > l && d[rr] > p)
				--rr;
			if (ll <= rr) {
				a = d[ll];
				d[ll] = d[rr];
				d[rr] = a;
				++ll;
				--rr;
			}
		}
		if (l < rr)
			qsort(d, l, rr);
		if (ll < r)
			qsort(d, ll, r);
	}
}


int main()
{
    ll n;
    get(n);

    ll arr[n+5];
    for(ll i=0;i<n;i++)
        get(arr[i]);

    qsort(arr,0,n-1);

    if(n&1)
        fastWrite(arr[n/2]);
    else
        fastWrite(arr[n/2-1]);
}
