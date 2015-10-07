#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("/home/mark/Desktop/input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
        
    ll t;
    cin>>t;

    while(t--) 
    {
    	ll n;
    	cin>>n;

    	ll sum=0,arr[n+5],mul=1-n;
    	for(ll i=0;i<n;i++)
    	{
    		cin>>arr[i];
    		sum+=arr[i]*(mul);
    		mul+=2;
    	}


    	for(ll i=0;i<n;i++)
    	{
    		for(ll j=i+1;j<n;j++)
    			sum+=abs(arr[i]-arr[j]);
    	}

    	cout<<sum<<"\n";
        /* code */
    }
}