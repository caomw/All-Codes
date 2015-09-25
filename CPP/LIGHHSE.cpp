#include<bits/stdc++.h>
typedef int64_t ll;
using namespace std;

main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdin);
    #endif
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,flag=0;
        cin>>n;
        ll x[n+5],y[n+5];

        cin>>x[0]>>y[0];
        ll xmin=x[0],xmax=x[0],ymin=y[0],ymax=y[0];
        ll indymin=0,indymax=0;

        for(ll i=1;i<n;i++)
        {
            cin>>x[i]>>y[i];

            xmin=min(xmin,x[i]);
            xmax=max(xmax,x[i]);

            if(ymin>y[i])
                ymin=y[i],indymin=i;

            if(ymax<y[i])
                ymax=y[i],indymax=i;
        }

        //this part you've not considered
        for(ll i=0;i<n;i++)
        {
            if(x[i]==xmin&&y[i]==ymin)
            {
                cout<<"1\n"<<i+1<<" "<<"NE\n";
                flag=1;
                break;
            }
            if(x[i]==xmax&&y[i]==ymin)
            {
                cout<<"1\n"<<i+1<<" "<<"NW\n";
                flag=1;
                break;
            }
            if(x[i]==xmin&&y[i]==ymax)
            {
                cout<<"1\n"<<i+1<<" "<<"SE\n";
                flag=1;
                break;
            }
            if(x[i]==xmax&&y[i]==ymax)
            {
                cout<<"1\n"<<i+1<<" "<<"SW\n";
                flag=1;
                break;
            }
        }

        if(flag)
            continue;
        cout<<"2\n";

        if(x[indymax]<x[indymin])
            cout<<indymax+1<<" SE\n"<<indymin+1<<" NW\n";
        else
            cout<<indymax+1<<" SW\n"<<indymin+1<<" NE\n";
    }
	return 0;
}