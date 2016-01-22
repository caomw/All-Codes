#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int fi(int n) {          
		int result = n;          
		for(int i=2;i*i <= n;i++) {            
			if (n % i == 0) result -= result / i;            
			while (n % i == 0) n /= i;          
		}          
		if (n > 1) result -= result / n;          
		return result;        
}  


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

			cout<<fi(n)<<"\n";
}
}
