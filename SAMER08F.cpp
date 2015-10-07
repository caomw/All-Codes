#include<iostream>
using namespace std;

int main()
{
    while(true)
    {

    long long int n,i,ans=0;
    cin>>n;

    if(!n)
        break;

    for(i=1;i<=n;i++)
        ans+=i*i;

    cout<<ans<<"\n";
    }
}
