#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t;
	cin>>t;

	while(t--)
	{
		ll n,k,m;
		cin>>n>>k>>m;

		ll count=0;
		while(m>n)
		{
			n*=k;
			count++;
			cout<<n<<"\n";
		}
		cout<<count<<"\n";
	}
}