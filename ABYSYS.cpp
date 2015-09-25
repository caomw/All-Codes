#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int isNum(string c)
{
    int i=0;
    while(i!=c.length())
    {
        if(c[i]<'0'||c[i]>'9')
        return 0;
        i++;
    }

    return 1;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string c1,c2,c3;
        scanf("%s + %s = %s",&c1,&c2,&c3);

        string::size_type sz;
        int ic1=stoi(c1,&sz);

    }
}
