#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;

int main()
{
    std::ios::sync_with_stdio(0);
    ll t;
    cin>>t;

    while(t--)
    {
        char c1[2005],c2[2005];
        cin>>c1>>c2;

        ll counti=0;

        if(strlen(c1)<strlen(c2))
        {
            for(ll i=0;i<strlen(c1);i++)
            {
                if(c1[i]!=c2[i])
                counti++;
            }
        }
        else
        {
            for(ll i=0;i<strlen(c2);i++)
            {
                if(c1[i]!=c2[i])
                counti++;
            }
        }

        ll siz=strlen(c1);
        siz-=strlen(c2);

        counti+=abs(siz);
        cout<<counti<<"\n";
    }

}
