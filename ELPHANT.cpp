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
    ll n,len,q;
    get(n);get(len);get(q);

    map<ll,ll> mapi,inv_mapi;

    for(ll i=0;i<n;i++)
    {
        ll te;
        get(te);
        mapi[te]++;
        inv_mapi[i]=te;
    }
    while(q--)
    {
        ll fr,to,counti=0,maxi;
        get(fr);get(to);

        if(mapi[inv_mapi[fr]]==1)
            mapi.erase(inv_mapi[fr]);
        else
            mapi[inv_mapi[fr]]--;
        mapi[to]++;
        inv_mapi[fr]=to;

        map<ll,ll>::iterator it=mapi.begin();

        ll st=(*it).first,en=st+len;
        for(;it!=mapi.end();it++)
        {
            //cout<<(*it).first<<" ";
            if((*it).first>en)
            {
                st=(*it).first;
                counti++;
                en=st+len;
            }
/*
10 15 17 20

10 15 16 20
10 16 20 25
10 16 25 35
16 25 35 38
 0 25 35 38
*/        }//cout<<"\n";

        fastWrite(counti+1);
    }




}
