#include<bits/stdc++.h>
using namespace std;
typedef int ll;

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

    	ll arr[n+5],counti=0,lim;
    	for(ll i=0;i<n;i++)
    		cin>>arr[i];
    	
    	lim=arr[0];
    	for(ll i=0;i<n;i++)
    	{	
    		if(arr[i]<=lim)
    			counti++;

    		lim=min(arr[i],lim);

    	}

    	cout<<counti<<"\n";
    }
	return 0;
}

8
1 1 1 1  1 1 1 1
1 1 1 1  1 1 2
1 1 1 1  2 2
1 1 2 2 2
2 2 2 2 
1 1

8c0 + 8c1 + 8c2 + 8c3 + 8c4
7c0 + 7c1 + 7c2 + 7c3

7
1 1 1 1  1 1 1
1 1 1 1  1 2
1 1 1  2 2
1 2 2 2
