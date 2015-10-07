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
ll k,siz,req_sum=0,arr[100005],m=0;
ll getCount(ll n,ll cur_sum)
{
/*    for(ll i=0;i<siz;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
*/
    if(k==m)
        return true;

  //  cout<<cur_sum<<"\n";

    if(cur_sum==req_sum/k)
    {
        //arr[n-1]=0;
        n=siz;
        cur_sum=0;
        m++;

        //cout<<"m++\n";

            if(n<1)
    {
        return false;
    }
        getCount(n,0);
    }
        if(n<1)
    {
        return false;
    }

    while(!arr[n-1])
        n--;

    ll temp=arr[n-1];

    if(cur_sum+arr[n-1]<=req_sum/k)
        arr[n-1]=0;


    else if (cur_sum>req_sum/k)
    {
        cur_sum-=arr[n];
        n--;

        while(!arr[n-1])
        n--;

        ll temp=arr[n-1];

        if(cur_sum+arr[n-1]<=req_sum/k)
            arr[n-1]=0;

        return getCount(n-1,cur_sum+temp);
    }


    return getCount(n-1,cur_sum+temp);
}


int main()
{
    ll t;
    get(t);

    while(t--)
    {
        ll n;
        get(n);get(k);

        for(ll i=0;i<n;i++)
        {
            get(arr[i]);
            req_sum+=arr[i];

        }
        sort(arr,arr+n);
        siz=n;

        if(req_sum%k==0)
        {
            if(getCount(n,0))
                printf("yes\n");
            else
                printf("no\n");
        }

        else
            printf("no\n");
    }
}
