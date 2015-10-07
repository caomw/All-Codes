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
    
    ll n,k;
    cin>>n>>k;

    ll arr[n],counti=0;
    map<ll,ll> mapi;
    pair<ll,ll> pr;
    for(ll i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
	sort(arr,arr+n);

	for(ll i=0;i<n;i++)
	{
		ll x=lower_bound(arr,arr+n-1,arr[i]+k)-arr;

		if(abs(arr[i]-arr[x])==k)
			counti++;
		//cout<<arr[i]<<" "<<arr[x]<<"\n";
	}

	cout<<counti<<"\n";
	return 0;
}