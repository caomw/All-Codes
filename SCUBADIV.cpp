#include<bits/stdc++.h>
using namespace std;
typedef uint64_t ll;

ll max(ll a,ll b)
{
    if(b>a)
        return b;
    else
        return a;
}
ll min(ll a,ll b)
{
    if(b<a)
        return b;
    else
        return a;
}





ll nit[1024],ox[1024],wt[1024];
ll dp[1024][22][80];
ll INF = 9999999999;
/*
ll twoDKnap(ll rox,ll rnit,ll n)
{
    //cout<<dp[n][rox][rnit]<<" =dp\n";

    if(dp[n][rox][rnit]!=-1)
        return dp[n][rox][rnit];

    if(!rox&&!rnit)
        dp[n][rox][rnit]=0;
    
    else if(!n)
        dp[n][rox][rnit]=INF;
    
    else
        dp[n][rox][rnit]=min(twoDKnap(rox,rnit,n-1)
            ,twoDKnap(max(0,rox-ox[n-1]),max(0,rnit-nit[n-1])
                ,n-1)+wt[n-1]);

    return dp[n][rox][rnit];

}
*/

main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
    ll t;
    cin>>t;

    while(t--)
    {
    	ll rox,rnit;
        cin>>rox>>rnit;

        ll n;
        cin>>n;

        ll ox[n+5],nit[n+5],wt[n+5];
        for(ll i=0;i<n;i++)
            cin>>ox[i]>>nit[i]>>wt[i];

        ll dp[n+5][n+5][n+5];
        memset(dp,-1,sizeof(dp));

        for(ll i=0;i<=n;i++)
        {
            for(ll oi=0;oi<=rox;oi++)
            {
                for(ll ni=0;ni<=rnit;ni++)
                {
                 
                    if(!i)
                        dp[i][oi][ni]=999999;

                    else if(!oi&&!ni)
                        dp[i][oi][ni]=0;
                    
                    else if(dp[i-1][max(0,oi-ox[i-1])][max(0,ni-nit[i-1])]!=-1)
                        dp[i][oi][ni]=
                            min(dp[i-1][max(0,oi-ox[i-1])][max(0,ni-nit[i-1])]+wt[i-1],
                                dp[i-1][oi][ni]);
                    else
                        dp[i][oi][ni]=dp[i-1][oi][ni];

                    //cout<<dp[i][oi][ni]<<"\n";
                }
            }
        }
        
        cout<<dp[n][rox][rnit]<<"\n";
        //cout<<twoDKnap(rox,rnit,n)<<"\n";

    }
	return 0;
}