#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    long long int n;
    cin>>n;

    char c[1005];
    cin>>c;

    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]=='L')
        {
            if(n&1)
            {
                n/=2;
                n++;
            }

            else
                n/=2;
        }

        else
        {
            n*=2;
            n+=11;
        }
    }
    cout<<n;
}
