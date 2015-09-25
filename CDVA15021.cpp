#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100000000
typedef unsigned long long biginput;

using namespace std;

#define gc getchar

inline biginput fastinput()
{

    char c;
    biginput ans=0;
    do
    {
        c=gc();
    }
    while(c<'0' || c>'9');
    do
    {
        ans = (ans<<3) + (ans<<1) + (c-48);
        c=gc();
    }
    while(c>='0' && c<='9');
    return ans;

}
int main()
{
    biginput t;
    t=fastinput();
    while(t--)
    {
        biginput n,k,i,enter,max=1;
        n=fastinput();
        k=fastinput();
        biginput a[n+1];
        for(i=0;i<k;i++)
        {
            enter=fastinput();
            if(enter>max)
                max=enter;
        }
        a[1]=1;
        for(i=2;i<=n;i++)
        {

            a[i]=(i*a[i-1])%max;
        }
        a[n]=a[n]%max;
        printf("%llu\n",a[n]);

    }
    return 0;
}
