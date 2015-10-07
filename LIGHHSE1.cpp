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

        ll x[n+5],y[n+5];
        multimap<ll,ll> modu;
        for(ll i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
            modu.insert(pair<ll,ll>(-1*(x[i]*x[i]+y[i]+y[i]),i));
        }

        ll ne[n+5],se[n+5],nw[n+5],sw[n+5],maxi=-1;
        vector<ll> vecInd,vacDir;
        for(ll ind=0;ind<n;ind++)
        {
            multimap<ll,ll> te;
            for(ll i=0;i<n;i++)
            {
                if(x[i]>=x[ind]&&y[i]>=y[ind])
                {
                    ne[ind]++;
                }
                if(x[i]<=x[ind]&&y[i]>=y[ind])
                {
                    nw[ind]++;
                }
                if(x[i]>=x[ind]&&y[i]<=y[ind])
                {
                    se[ind]++;
                }
                if(x[i]<=x[ind]&&y[i]<=y[ind])
                {
                    sw[ind]++;
                }
            }

            if(max(ne[ind],max(se[ind],max(sw[ind],nw[ind])))>maxi)
            {
                maxi = max(ne[ind],max(se[ind],max(sw[ind],nw[ind])));
                vecInd.clear();vecDir.clear();
            }
            else if(maxi == max(ne[ind],max(se[ind],max(sw[ind],nw[ind]))))
            {
                vecInd.push_back(ind);
                vecDir.push_back(ind);
            }
            auto it=te.begin();

        }
        for(auto it=modu.begin();it!=modu.end();it++)
        {
            ll ne=0,nw=0,se=0,sw=0;
            ll ind = (*it).second;

        }
    }
	return 0;
}