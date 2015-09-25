#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int count=0;
        for(int i=1;i<n+1;i++)
        {
            int a=i,one=0,check=0;

            while(a)
            {
                int dig=a%10,ndig=dig;
                for(int j=0;j<one;j++)
                    ndig*=dig;
                check+=ndig;

                one++;
                a/=10;
            }

            if(check%7==0)
                count++;
        }

        cout<<count<<"\n";
    }
}
