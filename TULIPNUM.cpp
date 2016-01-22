#include <bits/stdc++.h>
typedef int ll;
using namespace std;

int main()
{

//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t;
	cin>>t;

	for (int cas=1;cas<=t;cas++)
	{
		cout<<"Case "<<cas<<":\n";
		ll n,q;
		cin>>n>>q;

		ll arr[n+5];
		for (ll i=0;i<n;i++)
			cin>>arr[i];

		ll distinct[n+1],preVal[n+1],pv;
		for(ll i=0;i<n+1;i++)
			distinct[i] = 0,preVal[i]=0;
			
		distinct[1]=1;

	//	cout<<preVal[0]<<" ";
		for(ll k=2;k<1+n;k++)
		{
			distinct[k]=distinct[k-1];
			preVal[k]=preVal[k-1];

			if(arr[k-1]!=arr[k-2])
				distinct[k]+=1,preVal[k-1]=distinct[k-2];

			//cout<<preVal[k-1]<<" ";
		}
	//	cout<<preVal[n];
	//	cout<<"\n";
		

		while(q--)
		{
			ll l,r;
			cin>>l>>r;

			if (l==r)
				cout<<"1\n";
			else
				cout<<distinct[r]-distinct[l]+1<<"\n";
		}
	}
}