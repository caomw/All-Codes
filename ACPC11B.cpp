#include <bits/stdc++.h>
using namespace std;
typedef int ll;
#define limit 10000005

main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	ll t=0;
	cin>>t;

	while(t--)
	{
		ll h1,h2;
		cin>>h1;

		ll m1[h1+1];
		for(int i=0;i<h1;i++)
			cin>>m1[i];

		cin>>h2;
		ll m2[h2+1];
		for(int i=0;i<h2;i++)
			cin>>m2[i];

		ll mini= INT_MAX;
		for(int i=0;i<h1;i++)
			for(int j=0;j<h2;j++)
				mini=min(mini,abs(m1[i]-m2[j]));
		
		cout<<mini<<"\n";
	}
}
