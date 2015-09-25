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

    	ll arr1[n+5];
    	for(ll i=0;i<n;i++)
    		cin>>arr1[i];

    	ll arr2[n+5];
    	for(ll i=0;i<n;i++)
    		cin>>arr2[i];

    	sort(arr1,arr1+n);
    	sort(arr2,arr2+n);

    	ll sum=0;
    	for(ll i=0;i<n;i++)
    	{
    		sum+=arr1[i]*arr2[i];
    	}

    	cout<<sum<<"\n";
    }
	return 0;
}