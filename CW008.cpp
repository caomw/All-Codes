#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

    ll np;
    cin>>np;

    ll pts[np+5];
    for(ll i=0;i<np;i++)
        cin>>pts[i];

    ll nl;
    cin>>nl;

    ll loc[nl+5];
    for(ll i=0;i<nl;i++)
    {
        cin>>loc[i];
        loc[i]--;
    }

    ll atmpt;
    cin>>atmpt;

    while(atmpt--)
    {
        ll st,pl,ans=0;
        cin>>st>>pl;
        st--;

        ll vis[np+5];
        memset(vis,0,sizeof(vis));

        while(pl--)
        {
             if(!vis[loc[st%nl]])
             ans+=pts[loc[st%nl]],vis[loc[st%nl]]=1;

           // cout<<loc[st%nl]<<" ";
            st++;
        }

        cout<<ans<<"\n";
    }

	return 0;
}