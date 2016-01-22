#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
#define gc getchar_unlocked
typedef long long int ll;
#define size 65536

ll numDiv(ll a)
{
	ll num=0;

	for(ll i=1;i<=sqrt(a);i++)
		if(a%i==0)
			num++;//,printf("%d ",i );

	//printf("\n");
	return num;
}
void scanint(ll &x)
{
    register ll c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	ll te;
	scanf("%lld",&te);

	while(te--)
	{
		ll a,b;
		scanint(a);
		scanint(b);


//		scanf("%lld%lld",&a,&b);

		a = __gcd(a,b);
		b = 2*numDiv(a);

		if (a==sqrt(a)*sqrt(a))
			b--;

		printf("%lld\n",b);
	}
	char bc[size];
	ll c,b,a,t=0;
    //int t=0,n,k,cnt=0;
	
	while((c = fread(bc,1,size,stdin))>0)
    {
               for(ll j=0;j<c;j++)
               {
                if(bc[j]=='\n')
                {
                	b = t;
                	t = 0;
					a = __gcd(a,b);
					b = 2*numDiv(a);

					if (a==sqrt(a)*sqrt(a))
						b--;

					printf("%lld\n",b);
                }
                else if (bc[j]==127)
                {
                	a=t;
                	t=0;
                }
                else
                {
                              t = (t*10) + (bc[j]-'0');                
                }              
               }
     }
  
}
