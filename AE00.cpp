#include<iostream>
using namespace std;

int main()
{
 long long int i,n,sum=0;
 cin>>n;

 for(i=1;i<=n;i++)
 {
    if((i%2==0)&&i!=2)
    sum++;

    sum++;
 }

 cout<<sum;
}
