#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int large=0,small=0,num=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            large++;
        else if(s[i]>='a'&&s[i]<='z')
            small++;
        else if(s[i]>='0'&&s[i]<='9')
            num++;
    }

    if(s.length()>4&&small&&large&&num)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
