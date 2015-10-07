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

    while(t--);
    {
    ll n,q,i=1;
    get(n);

    ll arr[n+5];
    memset(arr,0,sizeof(arr));

    q=n-1;
    while(q--)
    {
        ll a,b;
        get(a);get(b);
        a--;b--;

            if(arr[a]+arr[b]==0)
            {
                arr[a]=i;
                arr[b]=i++;
            }

            else if(arr[a]==0&&arr[b]!=0)
            {
                arr[a]=arr[b];
            }
            else if(arr[b]==0&&arr[a]!=0)
            {
                arr[b]=arr[a];
            }
            else if(arr[a]!=0&&arr[b]!=0)
            {
                ll sw=arr[b];
                for(ll j=0;j<n;j++)
                {
                    if(arr[j]==sw)
                        arr[j]=arr[a];
                }
            }

            //cout<<arr[a]<<" "<<arr[b]<<"\n";

/*

        for(ll i=0;i<n;i++)
                cout<<arr[i]<<" ";

        cout<<"\n";*/
    }
    sort(arr,arr+n);
    ll counti=0,maxi=0;
    for(ll i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1]&&arr[i]!=0)
            counti++;
        else
            counti=0;
        if(maxi<counti)
            maxi=counti;
    }

    fastWrite(maxi);

}
}
