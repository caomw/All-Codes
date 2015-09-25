#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        string s;
        cin>>s;

        ll ways=1;
        string ans;
        for(ll i=0;i<s.length();i++)
        {
            if(i+1<s.length()&&i%2==0)
            {
                if(s[i]<s[i+1])
                    ans+=s[i],ans+=s[i+1];
                else
                    ans+=s[i+1],ans+=s[i],ways*=2;
                
            }
            else if(i%2==0)
                ans+=s[i];
/*
            if(s[i]<s[i+1])
                ways*=2;*/
                
        }
        cout<<ways<<"\n";
        cout<<ans<<"\n";
    }
	return 0;
}