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
{char sum[20];ll i=0;do{ sum[i++]=n%10+48;n=n/10;}while(n!=0);while(i>0){ putchar(sum[--i]);} ;}inline void get(ll &x){register ll c = getchar();x = 0;ll neg = 0;for(;((c<48 || c>57) && c != '-');c = getchar());
if(c=='-') {neg=1;c=getchar();}for(;c>47 && c<58;c = getchar()) {x = (x<<1) + (x<<3) + c - 48;}if(neg) x=-x;
}

int main() {

ll t,n=25005;
get(t);

	ll fact[25010],i;

	fact[0]=1;
	ll digits[25005];
	ll temp,carry=0;
    digits[0]=1;
    digits[1]=1;
    digits[2]=1;
    digits[3]=1;

	for(i=2;i<=n;i++){
		for(ll j=0;j<digits[i];j++){
			temp= fact[j]*i + carry;
			carry = temp/10;
			fact[j]= temp%10;
		}

		while(carry){
			fact[digits[i]++]= carry%10;
			//digits[i]=digits[i-1]+1;
			carry/=10;
		}
		digits[i+1]=digits[i];
	}


while(t--)
{	ll m;
	get(m);

	while(m--)
    {	ll q;
	get(q);

	//for(i=digits-1;i>=0;i--)
        fastWrite(digits[q]);
    putchar(' ');


    }
    putchar('\n');
}

	return 0;
}

