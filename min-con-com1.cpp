#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll wt[200005],parent[200005],ranki[200005],mini=LLONG_MAX,mind;

ll find(ll x)
{
    if(parent[x]==x)
        return x;
    return find(parent[x]);
};

void Union(ll x ,ll y,ll wt[])
{
    ll xpar = find(x);
    ll ypar = find(y);
    
    if(xpar!=ypar)
    {
        wt[xpar]+=wt[ypar];
        wt[ypar] =wt[xpar]; 
    }
    if(ranki[ypar]>ranki[xpar])
        parent[ypar] = xpar,ranki[ypar]++;
    else 
        parent[xpar] = ypar,ranki[xpar]++;
}

main()
{

    ios::sync_with_stdio(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    #endif

    ll n,q;
    cin>>n>>q;

    for(ll i=0;i<n;i++)
    {
        cin>>wt[i];
        parent[i]=i;
        ranki[i]=1;
    }

    while(q--)
    {
        ll st,ed;
        cin>>st>>ed;
        st--;ed--;  

        Union(st,ed,wt);

        ll mini=LLONG_MAX;
        for(ll i=0;i<n;i++)
            mini=min(mini,wt[find(i)]);

        cout<<mini<<"\n";

    }

	return 0;
}