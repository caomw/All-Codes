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
    ll t;
    cin>>t;

    while(t--)
    {
    	ll n;
        cin>>n;

        ll speed[n+5],ipos[n+5];
        for(ll i=0;i<n;i++)
            cin>>speed[i]>>ipos[i];

        ll q;
        cin>>q;

        while(q--)
        {
            ll t,pos;
            cin>>t>>pos;
            //pos--;

            ll fpos[n+5];
            map<ll,ll> ffpos;//[n+5];
            for(ll i=0;i<n;i++)
            { 
                fpos[i]=ipos[i];
                fpos[i]-=(speed[i]*t);

                if(fpos[i]<0)
                    fpos[i]=0;

                ffpos[fpos[i]]=i; 
            }

            map<ll,ll>::iterator it=ffpos.begin();
            for(ll i=0;i<pos;i++)
            {
                cout<<(*it).first<<" ";
                it++;
            }

            pos=(*it).second;

            ll j=0;
            for(;j<n;j++)
                if(fpos[j]==ffpos[pos])
                    break;
            

            cout<<j+1<<"\n\n";

        }


    }
	return 0;
}