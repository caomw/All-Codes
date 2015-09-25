#include<cstring>
#include<iostream>
#include<math.h>
#include<iomanip>
#include<stdio.h>
using namespace std;
typedef long long int ll;
#define mod 1000007

int main()
{
    std::ios::sync_with_stdio(0);

    char c;
    ll n;

    do
    {
        cin>>n;

        if(n==1)
        cout<<"1\n";
        else if(!n)
        cout<<"0\n";
        else
        cout<<2*n-2<<"\n";

    }while((c=getchar())!=EOF);

}
