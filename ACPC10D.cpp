#include <bits/stdc++.h>
using namespace std;
typedef int ll;
#define limit 10000005

ll cost[limit][3];
ll grid[limit][3];
ll n;

void printBlock()
{
	for(ll l=0;l<n;l++)
	{
		for(ll m=0;m<3;m++)
			cout<<cost[l][m]<<" ";
		cout<<"\n";
	}

	cout<<"\n";
}

void dfs(ll i,ll j,ll preCost)
{
	if(cost[i][j]<=grid[i][j]+preCost)
		return;

	//printBlock();

	cost[i][j]=grid[i][j]+preCost;

	ll dirx[] = {1,0,1,-1};
	ll diry[] = {0,1,1,1};

	for(ll k=0;k<4;k++)
	{
		ll ni = i+diry[k];
		ll nj = j+dirx[k];

		if(ni>=0 and ni<n)
			if(nj>=0 and nj<3)
				dfs(ni,nj,cost[i][j]);
	}
}

main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	ll t=0;

	while(true)
	{
		t++;

		cin>>n;

		if(not n)
			break;

		for(ll i=0;i<n;i++)
			for(ll j=0;j<3;j++)
			{
				cin>>grid[i][j];
				cost[i][j] = INT_MAX;
			}

		dfs(0,1,0);
		cout<<t<<". "<<cost[n-1][1]<<"\n";
	}
}
