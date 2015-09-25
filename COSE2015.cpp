#include<bits/stdc++.h>
using namespace std;
typedef int ll;

main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        //freopen("/home/mark/Desktop/input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
    ll t;
    cin>>t;

    while(t--) 
    {
    	char c[100005];
    	cin>>c;

    	ll arr[27];
    	for(ll i=0;i<26;i++)
    		arr[i]=0;

    	for(ll i=0;i<strlen(c);i++)
    	{
    		arr[c[i]-'a']++;
    	}

    	ll counti=0;
    	for(ll i=0;i<26;i++)
    	{
    		if(arr[i]>0)
    			counti++;
    	}

    	if(counti&1)
    		cout<<"Counter Terrorist\n";
    	else
    		cout<<"Terrorist\n";
        /* code */
    }
	return 0;
}