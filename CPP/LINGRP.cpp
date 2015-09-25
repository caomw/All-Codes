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
    	ll n,q;
    	cin>>n>>q;

    	ll arr[n+5][n+5];
    	for(ll i=0;i<n;i++)
    		for(ll j=0;j<n;j++)
    			arr[i][j]=0;
    	
    	for(ll i=0;i<n;i++)
    	{
    		ll x,y;
    		cin>>x>>y;
    		x--;y--;
    		arr[x][y]++;
    		arr[y][x]++;
    	}

    	bool flag=1;
    	for(ll i=0;i<n;i++)
    		{

    		for(ll j=0;j<n;j++)
    			{

    				if(arr[i][j]>1)
    					flag=0;
    			}	
    		}
    		
    		}


    	if(flag)
    		cout<<"Yes\n";
    	else
    		cout<<"No\n";
    }
	return 0;
    			
}