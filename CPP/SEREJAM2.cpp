#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

long double arr[10001];
main()
{
	std::ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
  //      freopen("C:\\Users\\mrmoh\\Desktop\\input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,m;
        cin>>n>>m;

        long double cur=1.0,sum=0.000000;
        for(ll i=0;i<n;i++)
        {
            cur=1.0;
            for(ll j=0;j<m;j++)
            {
                long double p;
                cin>>p;

                //if(j!=1)
                    cur*=(p*100);
                //else
                  //  cur*=p;
                  //  cout<<cur<<"\n";
            }

            arr[i]=cur;
            sum+=arr[i];
            //cout<<arr[i]<<" "<<sum<<"\n";
        }

        //arr[0]/=(sum);
        if(sum==0)cout<<"0.000000\n";
        else
        cout<<fixed<<setprecision(6)<<arr[0]/(sum)<<"\n";
    }

}
