#include<bits/stdc++.h>
using namespace std;

long double  x = sqrt(2);
long double  y = sqrt(3);


void next(long double &ai,long double &bi)
{
            long double a,b;
            a=x*bi*(y+1) - x*ai*(y-1);
            b=x*bi*(y-1) + x*ai*(y+1);

            ai=a;
            bi=b;
}
main()
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    #endif

    int64_t i,k,s;
    cin>>i>>k>>s;

    long double ai,bi;
    cin>>ai>>bi;

    k = k-i;

    bool flag=k%2;

    k/=2;

    if(k<0) 
    {
        k*=-1;
        k-=flag;
        k*=-1;
    }

        ai*=pow(2,4*k-s);
        bi*=pow(2,4*k-s);

    if(flag)
        next(ai,bi);

    printf("%Lf\n",ai+bi);
	return 0;
}