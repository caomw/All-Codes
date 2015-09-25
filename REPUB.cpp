#include<iostream>
#include<stdio.h>
using namespace std;
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>

int main()
{
    int t;
    cin>>t;

    string t1;
    getline(cin,t1);
    while(t--)
    {
        string s;
        getline(cin,s);

        int arr[26],maxi=0;
        char C='!';

        memset(arr,0,sizeof(arr));

        for(int i=0;i<s.length();i++)
        {


            if(s[i]<='z'&&s[i]>='a')
                ++arr[s[i]-'a'];

            if(s[i]<='Z'&&s[i]>='A')
            {
                char c=tolower(s[i]);
                ++arr[c-'a'];
            }


        }

        for(int i=25;i!=-1;i--)
        {
            if(maxi<arr[i])
            {
                maxi=arr[i];
                C=i+'a';
            }
        }

            cout<<C<<"\n";
    }
}

