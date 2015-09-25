#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll findIt(ll hlth,ll arm,ll ind,ll time,map<ll, map<ll,ll> > mapi)
{
	
	if(mapi[hlth][arm])
		return mapi[hlth][arm];

	if(hlth<=0||arm<=0)
		{
			mapi[hlth][arm]=time;		
			return time;
		}

	if(ind==1)
	{
		ind=2;
		mapi[hlth][arm] = max(findIt(hlth-5,arm-10,ind,time+1,mapi),
			findIt(hlth-20,arm+5,ind,time+1,mapi));

		return mapi[hlth][arm];
	}
	else if(ind==2)
	{
		ind=1;
		mapi[hlth][arm] = findIt(hlth+3,arm+2,ind,time+1,mapi);
		return mapi[hlth][arm];
	}
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

    while(t--) 
    {
    	ll hlth,arm,counti=0,flag=0;
    	cin>>hlth>>arm;

    	map<ll, map<ll,ll> > mapi;

    	cout<<findIt(hlth+3,arm+2,1,0,mapi)<<"\n";
        /* code */
    }
	return 0;
}