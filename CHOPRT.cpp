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
        ll a,b;
        cin>>a>>b;

        if(a<b)
            cout<<"<";
        if(a>b)
            cout<<">";
        if(a==b)
            cout<<"=";
        cout<<"\n";
    }
	return 0;
}