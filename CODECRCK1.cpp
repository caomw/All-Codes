#include<bits/stdc++.h>
using namespace std;

#define x 1.414213562
#define y 1.732050808

main()
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif
    int64_t i,k,s;
    cin>>i>>k>>s;

    long double ai,bi;
    cin>>ai>>bi;

    if(i<=k)
    {
        while(i!=k)
        {
            long double a,b;
            a=x*bi*(y+1) - x*ai*(y-1);
            b=x*bi*(y-1) + x*ai*(y+1);

            ai=a;
            bi=b;
            i++;
        }

        long double d = (ai+bi);
        d/=pow(2,s);
        printf("%Lf",d);
    }
    
    else
    {
        while(i!=k)
        {
            long double a,b;
            b = bi*(y-1) + ai*(y+1);
            b/=(x*8);

            a = bi*(y+1) - ai*(y-1);
            a/=(8*x);

            ai=a;
            bi=b;
            i--;
        }

        long double d = (ai+bi);
        d/=pow(2,s);
        printf("%Lf",d);
    }

	return 0;
}