#include<bits/stdc++.h>

#define	    ll	long long int
//#define	    ll		    long long int
#define     D               double
#define     LD              long double

#define     s(n)	    scanf("%d",&n)
#define     ss(n)	    scanf("%s",n)
#define     sc(n)	    scanf("%c",&n)
#define     sl(n)	    scanf("%ld",&n)
#define     sll(n)	    scanf("%lld",&n)

#define     fr(i,a,b)	    for(ll i=a;i<b;i++)

#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))

#define	    p(n)	    printf("%d",n)
#define	    pl(n)	    printf("%ld",n)
#define	    pll(n)	    printf("%lld",n)
#define	    pbl(n)	    printf("\n")
#define     mp              make_pair
#define     vi              vector<ll>
#define     pb              push_back
#define     se              second
#define     f               first
#define     mod             1000000007
#define pp   pair<ll,ll>
using namespace std;

//using namespace std;
inline ll getn(){
	ll n=0, c=getchar();
	while(c < '0' || c > '9')
		c = getchar();
	while(c >= '0' && c <= '9')
		n = (n<<3) + (n<<1) + c - '0', c = getchar();
	return n;
}

ll val[100005];
int main()
{
		std::ios_base::sync_with_stdio(0);
			ll n1,a,b,p,q,min,u,v;
ll t,n,i,j,pl;
cin>>t;
 map<ll,ll> kler;
while(t--)
{

	memset(val,0,sizeof(val));
 	kler.clear();
	cin>>n;
	pp kl[n];

	for(j=0;j<n;j++)
	{

	cin>>n1;
		cin>>a>>b;
		p=a;
		q=b;
		min=0;
		for(i=1;i<n1;i++)
		{
			cin>>u>>v;
			min+=(p*v-u*q);
			p=u;
			q=v;


		}

		min+=(u*b-v*a);

		if(min<0)
		min=-min;

		kl[j].f=j;
		kl[j].se=min;
		kler[min]=j;

	}
    //kler ->  area,index
    //kl   ->  index.index,area
	i=0;
	map<ll,ll>::iterator it;

	for(it=kler.begin();it!=kler.end();it++)
	{
	kler[(*it).first]=i++;
	}

	for(i=0;i<n;i++)
	printf("%lld ",kler[kl[i].second]);

	printf("\n");

}

	return 0;
}


/*
1
6
6
-2 2 -1 1 2 2 2 -1 1 -2 -2 -2
3
-1 -1 1 -1 1 1
4
3 3 -3 3 -3 -3 3 -3
4
3 3 -3 3 -3 -3 3 -3
4
3 3 -3 3 -3 -3 3 -3
6
-2 2 -1 1 2 2 2 -1 1 -2 -2 -2

*/
