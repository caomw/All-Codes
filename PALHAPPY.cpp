#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char s[10000];
        cin>>s;

        int flag=0;
        for(int i=0;i<strlen(s)/2;i++)
        {
            if(s[i]!=s[strlen(s)-i-1])
                flag++;

            if(flag==2)
                break;
        }

        if(flag==2)
            cout<<"no\n";
        else
            cout<<"yes\n";

    }
}
