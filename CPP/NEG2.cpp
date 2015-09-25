#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

string tonegbin(ll x)
{
		 string res = "";

	//if(!x)
	//	return "0";
		 while(x != 0)
		 {
					if(abs(x)&1)
					{
						  res = "1" + res;
						  x = (x - 1) / -2;
			  		}
			  		else
			  		{
						 res = "0" + res;
						 x /= -2;
			 	  	}
		 }
		 return res;
}
 

main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("/home/mark/Desktop/input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
    
    while(1)
    {

    ll n;
    cin>>n;
    
    if(!n)
    	break;

    cout<<tonegbin(n)<<"\n";
	
    }
    
}

