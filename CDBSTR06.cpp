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

    	cin>>arr[1];
    	sum[1]=arr[1];
    	sum[0]=0;

    	for(ll i=2;i<=n;i++)
    		cin>>arr[i],sum[i]=sum[i-1]+arr[i];
    	
    	ll sum1,ast=0,ase=1,st=0,se=1,si=0,len=1;
    	long long int maxsum=sum[0];

    	for(ll i=1;i<=n;i++)
    	{
    		if(arr[i]<0)
    		{
    			sum1=sum[se]-sum[st];

    			if(sum1>maxsum)
    			{
    				ast=st;
    				ase=se;
    				maxsum=sum1;
    			}
    			else if(sum1==maxsum&&se-st>len)
    			{
    				ast=st;
    				ase=se;
    				len=ase-ast;
    			}
    		}
    		else 
    		{
    			if(arr[i-1]<0)
    			{
    				st=i;
    			}
    			
    			se=i;
    		}
    	}




   		for(ll i=ast;i<=ase;i++)
    			cout<<arr[i]<<" ";
    		cout<<"\n";

//    		break;
    }
	return 0;
}