#include<cstring>
#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char s[10000];
        cin>>s;

        ll count=0;
        for(int i=0;i<strlen(s);i++)
            count+=(s[i]-'a'+1);

        cout<<count<<"\n";
    }
}
