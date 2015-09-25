#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll dp[2005][2005];
int main()
{
    std::ios::sync_with_stdio(0);
    ll n;
    cin>>n;

    ll a[n+5];
    for(ll i=0;i<n;i++)
    cin>>a[i];

    for(int i=0;i<n;i++)
    {
        dp[i][i]=n*a[i];
    }

    for(int i=n-2;i>=0;i--)
    {
        for(int j=i+1;j<n;j++)
        {
            dp[i][j] = max((n+i-j)*a[i]+dp[i+1][j],
                        dp[i][j-1] + (n+i-j)*a[j] );
        }
    }
    printf("%d\n",dp[0][n-1]);

    //cout<<findMax(arr,0,n-1,n,1);
}

