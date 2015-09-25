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

int main()
{
    ll t;
    get(t);

    while(t--)
    {
        ll R,G,B,m;
        get(R);get(G);
        get(B);get(m);

        ll rmax=0,gmax=0,bmax=0;
        ll r[R+5],g[G+5],b[B+5];

        for(ll i=0;i<R;i++)
        {
            get(r[i]);

            if(r[i]>rmax)
                rmax=r[i];
        }
        for(ll i=0;i<G;i++)
        {

            get(g[i]);

            if(g[i]>gmax)
                gmax=g[i];
        }
        for(ll i=0;i<B;i++)
        {

            get(b[i]);

            if(b[i]>bmax)
                bmax=b[i];
        }

        while(m--)
        {
            if(rmax>=max(gmax,bmax))
            {
                rmax=0;
                for(ll i=0;i<R;i++)
                {
                    r[i]/=2;

                    if(r[i]>rmax)
                        rmax=r[i];

                }
            }
            else if(gmax>=max(rmax,bmax))
            {
                gmax=0;
                for(ll i=0;i<G;i++)
                {
                    g[i]/=2;

                    if(g[i]>gmax)
                        gmax=g[i];

                }
            }
            else if(bmax>=max(gmax,rmax))
            {
                bmax=0;
                for(ll i=0;i<B;i++)
                {
                    b[i]/=2;

                    if(b[i]>bmax)
                        bmax=b[i];

                }
            }
        }

        fastWrite(max(max(rmax,gmax),bmax));
    }
}
