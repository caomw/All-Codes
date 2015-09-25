#include<iostream>
#include<stdio.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        float o,r,s;
        cin>>o>>r>>s;

        r=r*o+s;
        float ans = r/(o+1);

        printf("%.2f\n",ans);

    }
}
