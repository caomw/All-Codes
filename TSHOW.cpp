#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

string toBin(ll n)
{
	string c;
	while(n)
	{
		if(n&1)
		{
			c+="1";
		}
		else
			c+="0";
		n/=2;
	}

	return c;
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
    	ll n,temp;
    	cin>>n;
    	//cout<<toBin(n)<<" "<<n<<"\n";
    	temp=n;
    	
    	if(!n)
    		continue;

    	n--;n/=2;n++;
    	ll dig=log2(n)+1;
    	n=temp;

    	//cout<<pow(2,dig)-1<<" "<<dig<<"\n";
    	n-=pow(2,dig)-1;

    	string s=toBin(n);//<<"\n";

    	dig-=s.length();

    	string x;
    	for(ll i=0;i<dig;i++)
    		x+="5";

    	for(ll i=s.length()-1;i>=0;i--)
    	{
    		if(s[i]=='0')
    			x+="5";//s[i]='5';
    		else
    			x+="6";//s[i]='6';
    	}

    	cout<<x<<"\n";
    }
	return 0;
}