#include<iostream>
using namespace std;
typedef long long int ll;

long long int fact(ll n)
{
if(n==0||n==1)
return 1;
return n*fact(n-1);
}

int main()
{
ll n;
cin>>n;

cout<<fact(n)<<"\n";
}
