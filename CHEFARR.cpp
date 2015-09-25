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
    ll n;
    get(n);

    ll sum=0;
    vector<ll> vec;
    for(ll i=0;i<n;i++)
    {
        ll te;
        get(te);
        vec.push_back(te);
        sum+=vec[i];
    }
    if(sum%3==0)
    {
        ll i,sum1=0,sum2=0,sum3=0,zero1=0,zero2=0;
        for(i=0;i<n;i++)
        {
            cout<<vec[i]<<" ";
            sum1+=vec[i];

            if(sum1==sum/3)
            {
                i++;
                cout<<"sum1="<<sum1<<"\n";
                break;
            }
        }
        cout<<"\n";

        for(;i<n;i++)
        {
            cout<<vec[i]<<" ";
            if(vec[i]==0)
                zero1++;
            else
            {
                //i++;
                cout<<"zero1="<<zero1<<"\n";
                break;
            }
        }
        cout<<"\n";

        for(;i<n;i++)
        {
            cout<<vec[i]<<" ";
            sum2+=vec[i];

            if(sum2==sum/3)
             {
                i++;
                cout<<"sum2="<<sum2<<"\n";
                break;
            }
        }
        cout<<"\n";

        for(;i<n;i++)
        {
            cout<<vec[i]<<" ";
            if(vec[i]==0)
                zero2++;
            else
             {
                //i++;
                cout<<"zero2="<<zero2<<"\n";
                break;
            }
        }
        cout<<"\n";
        for(;i<n;i++)
        {
            cout<<vec[i]<<"1 ";
            sum3+=vec[i];
        }
        cout<<"sum3="<<sum3<<"\n";
        if(sum1==sum/3&&sum2==sum/3&&sum3==sum/3)
        {
            cout<<zero1<<" "<<zero2<<"\n";
            fastWrite((zero1+1)*(zero2+1));
        }
        else
            printf("0\n");

    }
    else
        printf("0\n");

}
