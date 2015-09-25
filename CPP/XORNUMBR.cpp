#include<bits/stdc++.h>
using namespace std;
typedef long  int ll;

main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("/home/mark/Desktop/input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
    ll t;
    cin>>t;

    for(ll i=1;i<=t;i++)
    {
    	ll n;
    	cin>>n;
    	//n=i;
    	n++;
    	ll bas=log2(n);

    	if(pow(2,bas)==n)
    		cout<<(n-1)/2<<"\n";
    	else
    		cout<<"-1\n";;
    
    }
	return 0;
}
