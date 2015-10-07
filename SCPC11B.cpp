#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


bool isPrime(ll n)
{
	if(n==2)
		return 1;
	
	if(n%2==0||n==1)
		return 0;

	for(ll i=3;i<sqrt(n)+1;i+=2)
	{
		if(n%i==0)
			return 0;
	}

	return 1;
}
main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
    
    ll t;
    cin>>t;

    while(t--)
    {
    	ll n;
    	cin>>n;

    	if(isPrime(n))
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    }
	return 0;
}