#include <bits/stdc++.h>
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
			ll n,updates;
			cin>>n>>updates;
			
			ll arr[n+1];
			memset(arr,0,sizeof(arr));
			
			for(ll i=0;i<updates;i++)
				{
					ll l,r,val;
					cin>>l>>r>>val;
					
					arr[l]+=val;
					arr[r+1]-=val;
				}
				
			for(int i=1;i<n+1;i++)
				arr[i]+=arr[i-1];
				
			ll q;
			cin>>q;
			
			while(q--)
				{
					ll query;
					cin>>query;
					
					cout<<arr[query]<<"\n";
				}
}
}
