#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        long long int ans=0;
        for(int i=0;i<s.length();i++)
        {
            ans+=s[i]-'A'+1;
        }
        cout<<ans<<"\n";
    }
}
