#include<iostream>
#include<stdio.h>
using namespace std;
#include<cmath>
#include<algorithm>

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        double a,b,c;
        cin>>a>>b>>c;

        double numer,denom;
        numer=a*b*c;
        denom=(a+b+c)*(a+b-c)*(b+c-a)*(c+a-b);
        denom=sqrt(denom);

        printf("%.2lf\n",(numer/denom));
    }
}
