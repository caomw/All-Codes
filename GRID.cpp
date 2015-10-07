#include<iostream>
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll arr[1005][1005];
int main()
{
    std::ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\mrmoh\\Desktop\\input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

    ll t;
    cin>>t;

    while(t--)
    {
        memset(arr,0,sizeof(arr));
        ll n;
        cin>>n;

        char c[n+5][n+5];

        for(ll i=0;i<n;i++)
        {
            cin>>c[i];
        }

        ll counti=0,mark=0;

        for(ll j=0;j<n;j++)
        {
            mark=0;
            for(ll i=n-1;i>=0;i--)
            {
                if(c[i][j]=='#')
                {
                    mark=1;
             //       cout<<i<<" "<<j<<"\n";
                }
                arr[i][j]+=mark;

            }
        }
/*
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                cout<<arr[i][j];
            }
            cout<<"\n";
        }
*/
        for(ll i=n-1;i>=0;i--)
        {
            mark=0;
            for(ll j=n-1;j>=0;j--)
            {
                if(c[i][j]=='#')
                {
                    mark=1;
                    //cout<<i<<" "<<j<<"\n";
                }
                arr[i][j]+=mark;

                //cout<<arr[n-1-i][n-1-j]<<" ";
                if(arr[i][j]==0)
                    counti++;

            }

           // cout<<"\n";
        }
/*
cout<<"\n";
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                cout<<arr[i][j];
            }
            cout<<"\n";
        }
*/
        cout<<counti<<"\n";

    }
}
