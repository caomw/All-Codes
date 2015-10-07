#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios::sync_with_stdio(0);

	ll t;
	cin>>t;

	while(t--)
	{
		ll n;
		cin>>n;

		ll arr[n+5],dp[n+5][2];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			dp[i][0]=0;
			dp[i][1]=0;
		}

		for (ll i=1;i<n;i++)
		{
			dp[i][0] = max(dp[i-1][0],dp[i-1][1]+abs(arr[i-1]-1));
			dp[i][1] = max(dp[i-1][1]+abs(arr[i]-arr[i-1]),dp[i-1][0]+abs(arr[i]-1));
		}

		cout<<max(dp[n-1][0],dp[n-1][1])<<"\n";
	}
}