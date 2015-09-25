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
     	char c1[15],c2[15];
     	cin>>c1>>c2;
     	ll flag=1;

     	for(ll i=0;i<strlen(c1);i++)
     	{
     		if(c1[i]!='?'&&c2[i]!='?')
     		{
     			if(c1[i]!=c2[i])
     				{
                        flag=0;
     					break;
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

