#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int n,w,j=1,count=0;
        cin>>n>>w;

        for(long long int i=0;i<n;i++)
            j*=10;

        for(long long int i=j/10;i<j;i++)
        {
            int weight =0;
            long long temp=j;

        for(int k=0;k<n-1;k++)
        {
            if(((i/(j/10))-(i/(j/100)))>0)
                weight+=(i/(j/10))-(i/(j/100));
            else
                weight-=(i/(j/10))-(i/(j/100));

            if(weight>201)
                break;
            j/=10;
        }
        if(weight==w)
            count++;
        count = count%1000007;

        j=temp;
        }

        cout<<count<<"\n";
    }
}
