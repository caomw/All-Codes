#include<bits/stdc++.h>
using namespace std;
typedef int ll;

main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif

    ll n,q;
    scanf("%d%d",&n,&q);

    double x[n+5],y[n+5],z[n+5];
    for(ll i=0;i<n;i++)
        scanf("%lf%lf%lf",&x[i],&y[i],&z[i]);

    while(q--)
    {
        double sum=0;
        double a,b,c,d;
        //cin>>a>>b>>c>>d;
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

        for(ll i=0;i<n;i++)
        {
               for(ll j=0;j<n;j++)
            if(i!=j)
            sum+=abs(a*(x[i]-x[j]) + b*(y[i]-y[j]) + c*(z[i]-z[j]) + d)
                /((n*(n-1))*sqrt(pow((x[j]-x[i]),4) + pow((y[j]-y[i]),4) + pow((z[j]-z[i]),4)));

        }
        printf("%lf\n",sum);
    }

	return 0;
}