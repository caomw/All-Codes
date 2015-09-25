#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    std::ios::sync_with_stdio(0);
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,flag=1;
        cin>>n;

        while(n--)
        {
            char c[100000];
            cin>>c;

            for(ll i=0;i+3<strlen(c);i++)
            {
                if(c[i]=='9')
                {
                    if(c[i+1]=='1')
                    {
                        if(c[i+2]=='1')
                        flag=0;
                    }
                }
            }
        }


            if(flag)
            cout<<"YES";
            else
            cout<<"NO";
            cout<<"\n";

    }
}

