#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    map<string,int> mapi;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

        mapi[s]++;
    }

    map<string,int>::iterator it;

    for(it=mapi.begin();it!=mapi.end();it++)
    {
        cout<<(*it).first
        <<" "<<mapi[(*it).first]
        <<"\n";
    }
}
