#include<stdio.h>
#include<iostream>
using namespace std;

typedef long long int ll;

int main()
{
        #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Mohit\\Desktop\\input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        ll arr[n+5][n+5],maxi=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                scanf("%lld",&arr[i][j]);
            }
        }

        ll sti=0,stj=0,o=1,p=1,xori=arr[sti][stj];

        while(sti!=n)
        {

            for(int i=sti;i<sti+o;i++)
            {
                for(int j=stj;j<stj+p;j++)
                {
                    //cout<<arr[i][j]<<" ";
                    xori^=arr[i][j];

                    if(xori>maxi)
                        maxi=xori;
                }
            }

            //cout<<"\n";
            o++;

            if(sti+o==n+1)
            {
                o=1;
                p++;
                xori=arr[sti][stj];
            }
            if(stj+p==n+1)
            {
                o=1;
                p=1;
                sti++;
                xori=arr[sti][stj];
            }

            if(sti==n)
            {
                stj++;
                o=1;p=1;
                sti=0;
                xori=arr[sti][stj];
            }
            if(stj==n)
                break;
        }

        cout<<maxi<<"\n";
    }
}
