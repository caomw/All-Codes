#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char s1[105],s2[105];
        scanf("%s%s",&s1,&s2);

        int mini=0,maxi=0;
        for(int i=0;i<strlen(s1);i++)
        {
            if(s1[i]!='?'&&s2[i]!='?'&&s1[i]!=s2[i])
                mini++;

            if(s1[i]=='?'||s2[i]=='?')
                maxi++;
        }
        cout<<mini<<" "<<maxi+mini<<"\n";
    }
}
