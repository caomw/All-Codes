#include<bits/stdc++.h>
using namespace std;
typedef int ll;


ll dp[2005][2005];

ll opti(ll a[],ll n)
{
    
    for(int i=0;i<n;i++)
        dp[i][i]=a[i];
    
    ll sums=0,lev=0;

    for(int i=n-2;i>=0;i--)
    {
        for(int j=i+1;j<n;j++)
        {
            if(lev)
            dp[i][j] = max(a[i] + dp[i+1][j],  dp[i][j-1] + a[j]),lev=0;
            
            else
            {
                sums += max(a[i],a[j]);
/*
                if(a[i]>a[j]) 
                    a[i] = 0; 

                else
                a[j] = 0;*/

                dp[i][j]=max(dp[i][j-1],dp[i+1][j]);
                
                lev=1;
            }
            cout<<dp[i][j]<<" i="<<i<<" j="<<j<<"\n";
            cout<<sums<<"\n";
        }
    }

    return dp[0][n-1] - sums;
}

int main()
{
    std::ios::sync_with_stdio(0);
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

    ll n;
    cin>>n;

    ll a[n+5];
    for(ll i=0;i<n;i++)
    cin>>a[i];

    printf("%d\n",opti(a,n));

    //cout<<findMax(arr,0,n-1,n,1);
}

