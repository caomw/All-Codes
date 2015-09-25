#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    std::ios::sync_with_stdio(0);

    ll t;
    cin>>t;

    while(t--)
    {
        char c[1005];
        cin>>c;

        int flag1=1,flag2=1;
        for(ll i=0;i<strlen(c)/2;i++)
            if(c[i]!=c[strlen(c)-i-1])
             {
                 flag1=0;
                 break;
             }


        ll arr[26];
        memset(arr,0,sizeof(arr));

        for(ll i=0;i<strlen(c);i++)
            arr[c[i]-'a']++;

        for(int i=0;i<26;i++)
            //cout<<arr[i]<<" ";

            if(!arr[i])
                {
                    flag2=0;
                    break;
                }

        if(flag1&&flag2)
            cout<<"palingram\n";
        else if(flag1)
            cout<<"palindrome\n";
        else if(flag2)
            cout<<"pangram\n";
        else
            cout<<"none\n";
    }
}
