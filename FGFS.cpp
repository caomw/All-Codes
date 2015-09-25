#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct Data
	{	ll s,f,p;	};

bool operator < (Data const &a, Data const &b)
	{return (a.p!=b.p)?(a.p<b.p):(a.f<b.f);}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    #endif

    ll t;
    cin>>t;

    while(t--)
    {
    	ll n,cmp;
    	cin>>n>>cmp;

    	Data arr[n+5];
    	for(ll i=0;i<n;i++)
    		cin>>arr[i].s>>arr[i].f>>arr[i].p;

    	if (n==0 || n==1)
    	{
    		cout<<n<<"\n";
    		continue;
    	}

    	sort(arr,arr+n);

    	ll cnt = 1,cur=0;

    	for(ll i=1 ;i<n;i++)
    		if(arr[i].p!=arr[i-1].p or arr[i].s>=arr[cur].f))
    			cur=i,cnt++;

    	cout<<cnt<<"\n";

    }
	return 0;
}