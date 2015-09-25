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
        char c[20];
        cin>>c;

        ll flag=1;
        for(ll i=0;i<strlen(c);i++)
        {
            if(c[i]!=c[strlen(c)-i-1])
                flag=0;

        }

        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
	return 0;
}