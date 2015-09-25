#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fibi[100005];

ll fib()
{
	fibi[0]=1;
	fibi[1]=1;

	for(ll i=2;i<100005;i++)
		fibi[i]=fibi[i-1]+fibi[i-2];
}

main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("/home/mark/Desktop/input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

    ll t;
    cin>>t;
    fib();

    while(t--) 
    {
    	ll n,sum=0;
    	cin>>n;

    	n=fibi[n];
    	cout<<n;
    	while(n)
    	{
    		sum+=n%2;
    		n/=2;
    	}

    	cout<<sum<<"\n";
        /* code */
    }
	return 0;
}