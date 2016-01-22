#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int getPrice(int prices[],int w,int n)
{
	int cost[n+1];

	cost[0] = 0;
	for(int i=1;i<n+1;i++)
		cost[i] = prices[i];

	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<=i;j++)
		{
	//		cout<<i<<"=i j="<<j<<"\n";
	//		cout<<cost[i]<<"\n";
	//		cout<<cost[i-j]<<"\n";
	//		cout<<prices[j]<<"\n";

			cost[i] = min(cost[i],cost[i-j]+prices[j]);
	//		cout<<cost[i]<<"\n\n";
			
		}
	}

	return cost[n];
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t ;
	cin>>t;


	while(t--)
	{
		int weight,n;
		cin>>weight>>n;

		int prices[n+1];
		for(int i=1;i<n+1;i++)
		{
			cin>>prices[i];

			if(prices[i]==-1)
				prices[i] = 5000;
		}

		int ans = getPrice(prices,weight,n);
	
		if(ans==5000)
			ans=-1;

		cout<<ans<<"\n";
		
	}
}