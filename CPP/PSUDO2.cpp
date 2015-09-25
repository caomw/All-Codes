#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;

    string a;
    getline(cin,a);

    while(t--)
    {
        string s;
        getline(cin,s);

        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                s[i]='a'+(s[i]-'a'+13)%26;
            }

            else if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]='A'+(s[i]-'A'+13)%26;
            }

            else if(s[i]>='0'&&s[i]<='9')
            {
                s[i]='0'+(s[i]-'0'+5)%10;
            }

            cout<<s[i];
        }
        cout<<"\n";
    }
}
