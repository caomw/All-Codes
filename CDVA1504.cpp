#include<iostream>
#include<cstring>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    string ti;
    getline(cin,ti);

    while(t--)
    {
        string c;
        getline(cin,c);


        for(int i=0;i<c.length();i++)
        {
            if(c[i]>='0'&&c[i]<='9')
                c[i]=c[i];
            else
                putchar(c[i]);
        }
        putchar('\n');
    }
}
