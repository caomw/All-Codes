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

     	ll arr[n+5];
     	for(ll i=0;i<n;i++)
     		cin>>arr[i];

     	sort(arr,arr+n);
4 7 9 12

     	ll sum1=0,sum2=0;
     	for(ll i=0;i<n;i++)
   			{
   				sum1+=arr[i]+arr[n-i-1];
   				sum2+=arr[i+1]
   			}
    }  
	return 0;
}