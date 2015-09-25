#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char a[10005],b[10005];
        cin>>a>>b;

        int arra[30],arrb[30],flag1=-1,flag2=-1,temp=0;
        memset(arra,0,sizeof(arra));
        memset(arrb,0,sizeof(arrb));

        for(int i=0;i<strlen(a)||i<strlen(b);i++)
        {
            if(i<strlen(a))
            arra[a[i]-97]++;

            if(i<strlen(b))
            arrb[b[i]-97]++;

            if(i<strlen(a)&&i<strlen(b))
            temp+=a[i]-b[i];
        }


        if(temp==0&&(strlen(a)==strlen(b)))
            flag2=1;

        int count1=0,count2=0;

        temp=0;
        for(int i=0;i<26;i++)
        {
            if(arra[i]>0)
            count1++;

            if(arrb[i]>0&&arra[i]>0)
            count2++;

            if(arra[i]!=arrb[i])
                temp=1;

        }

        if(count1==count2&&temp==0
           ||count1!=count2&&temp!=0)
            cout<<"YES\n";
        else
        cout<<"NO\n";

/*
        if(count1==count2)
            flag1=1;

        if(flag1*flag2==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";*/

    }
}
