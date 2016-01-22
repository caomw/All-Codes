#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	ll t ;
	cin>>t;

	while(t--)
	{
		ll n,sum=0;
		cin>>n;

		for(int i=1;i<sqrt(n)+1;i++)
			sum= (sum + i*(n/i))%1000000007;
	}

	
}