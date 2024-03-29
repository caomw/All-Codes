#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
#include<climits>
#include<map>
#include<math.h>
#include<set>
#include<algorithm>
#define LL long long int
#define P(N) printf("%d\n",N);
#define S(N) scanf("%d",&N);
#define SL(N) scanf("%lld",&N);
#define pb push_back
#define mp make_pair
#define pnl printf("\n");
#define FOR(i,a,b) for (i=a;i<=b;i++)
#define mem(a,val) memset(a,val,sizeof(a))
using namespace std;
int gcd(int a, int b){ int temp; while(b>0)	{ temp= b; b=a%b; a=temp;}	return a;}
vector< pair<int,int> > adj[25];
bool vis[25];
int dp[25];
//find the maximum wt path from root to a leaf node
void dfs(int node)
{
    int V;
    vis[node]=true;
    int len = adj[node].size();
    for(int i=0;i<len;i++)
    {
        V= adj[node][i].first;
        if(vis[V]==false)
        {
            dfs(V);
            dp[node]= max(adj[node][i].second+dp[V],dp[node]);
        }
    }
    return;
}
int main()
{
       #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Mohit\\Desktop\\input.txt", "r", stdin);
        freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
      #endif
      int i,j,N,t,u,v,wt;
      S(N);
      int sum=0;
      while(N-->1)
      {
            scanf("%d %d %d",&u,&v,&wt);
            sum=sum+wt;
            adj[u].pb(mp(v,wt));
            adj[v].pb(mp(u,wt));
      }
       dfs(1);
        int mwsp= dp[1];
        //cout<<mwsp<<endl;
        int ans= 2*sum - mwsp;
        P(ans)
return 0;
}
