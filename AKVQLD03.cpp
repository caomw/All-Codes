#include <bits/stdc++.h>
using namespace std;
typedef int ll;
#define limit 5000005

ll tree[limit];
ll fans[limit];
ll n,pos,val;
ll i,j;

void updateTree(ll node,ll st,ll ed)
{
	if(st>pos or ed<pos or st>ed)
		return;

	if(st==ed)
	{
		tree[node]+=val;
		return;
	}	

	updateTree(2*node+1,st,(st+ed)/2);
	updateTree(2*node+2,1+(st+ed)/2,ed);

	tree[node] = tree[2*node+1] + tree[2*node+2];
	return;
}

ll query(ll node,ll st,ll ed)
{
	if(st>j or ed<i or st>ed)
		return 0;

	if(st>=i and j>=ed)
		return tree[node];

	return query(node*2+1,st,(st+ed)/2)+query(node*2+2,1+(st+ed)/2,ed);
}

main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);
	ll q;
	cin>>n>>q;

	while(q--)
	{
		string s;
		cin>>s;

		if(s=="find")
		{
			cin>>i>>j;
			i--;j--;

			cout<<query(0,0,n-1)<<"\n";
		}
		else if(s=="add")
		{
			cin>>pos>>val;
			pos--;

			updateTree(0,0,n-1);
		}
	}


}
