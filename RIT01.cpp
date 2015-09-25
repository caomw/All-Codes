#include<cstring>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
        #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Mohit\\Desktop\\input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

    int t;
    cin>>t;

    while(t--)
    {
        char c[100005];
        cin>>c;

        int counti=0,maxi=0,lev=-1;

        if(c[0]=='Y')
            lev=1;

        for(int i=1;i<strlen(c);i++)
        {
            if(c[i]=='X'&&lev==1)
            {
                lev=-1;
                //counti++;
            }

            else if(c[i]=='Y'&&lev==-1)
                {
                    //counti++;
                    lev=1;
                }
            else
            {
                counti++;/*
                if(c[0]=='Y')
                    lev=1;
                else
                    lev=-1;*/
            }

            if(maxi<counti)
                maxi=counti;
        }
        cout<<maxi<<"\n";
    }
}
