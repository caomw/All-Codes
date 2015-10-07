#include<bits/stdc++.h>

#define	    ll		    long long int
#define     D               double
#define     LD              long double

#define     sd(n)	    scanf("%d",&n)
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
#define     s               second
#define     f               first
#define     mod             100007
using namespace std;


//ll lazy[1000000],n;
static ll lazy[10000000];

void updateTree2(ll *st,ll node,ll ss,ll se,ll i ,ll j, ll val)
{
/*
    for(ll k=0;k<3*n;k++)
        cout<<st[k]<<" ";
    cout<<"\n";
    cout<<ss<<" "<<se<<" "<<st[node]<<"\n";
*/
        if(ss>se || ss>j || se<i)
            {
                //cout<<"h\n";
                return;
            }

//i ss 2 0
//se j 2 4
        if(ss>=i&&j>=se)
        {
            //cout<<lazy[node]<<" M\n";
            //cout<<val<<" "<<ss<<" "<<se<<" "<<i<<" "<<j<<" eq\n";
            //if(ss>=i)



            lazy[node]+=val;

        if(lazy[node])
        {
            st[node]=lazy[node]*(1+se-ss);

            if(ss!=se)
            {
                lazy[2*node+1]+=lazy[node];
                lazy[2*node+2]+=lazy[node];
            }

            lazy[node]=0;
        }            //cout<<"x\n";
            return;
        }
//24
        if(ss<i||se>j)
        {


//cout<<"P\n";
            ll mid = ss+ (se-ss)/2;
            updateTree2(st,node*2+1,ss,mid,i,j,val);
            updateTree2(st,node*2+2,mid+1,se,i,j,val);
            st[node]=st[2*node+1]+st[2*node+2];
            return;
        }

        return;

}


ll findSum(ll *st,ll node,ll ss,ll se,ll i ,ll j, ll val,ll sum=0)
{
/*
    for(ll k=0;k<3*n;k++)
        cout<<st[k]<<" ";
    cout<<"\n";
    cout<<ss<<" "<<se<<" "<<st[node]<<"\n";
*/
        if(ss>se || ss>j || se<i)
            {
                //cout<<"h\n";
                return sum;
            }

//i ss 2 0
//se j 2 4
        if(ss>=i&&j>=se)
        {
            //cout<<lazy[node]<<" M\n";
            //cout<<val<<" "<<ss<<" "<<se<<" "<<i<<" "<<j<<" eq\n";
            //if(ss>=i)



            lazy[node]+=val;
        if(lazy[node])
        {
            st[node]+=lazy[node]*(1+se-ss);

            if(ss!=se)
            {
                lazy[2*node+1]+=lazy[node];
                lazy[2*node+2]+=lazy[node];
            }

            lazy[node]=0;
        }            //cout<<"x\n";
            return sum;
        }
//24
        if(ss<i||se>j)
        {

/*
        if(lazy[node])
        {
            if(ss>i&&se>j)
            st[node]+=lazy[node]*(1+j-ss);

            if(ss<i&&se<j)
            st[node]+=lazy[node]*(1+se-i);

            if(ss!=se)
            {
                lazy[2*node+1]+=lazy[node];
                lazy[2*node+2]+=lazy[node];
            }

            lazy[node]=0;
        }
*/
//cout<<"P\n";
            ll mid = ss+ (se-ss)/2;
            findSum(st,node*2+1,ss,mid,i,j,val,sum);
            findSum(st,node*2+2,mid+1,se,i,j,val,sum);

            st[node]=st[2*node+1]+st[2*node+2];
            return sum;
        }

        return sum;

}


ll buildTree(ll *st,ll ss,ll se,ll arr[],ll si)
{
    if(ss==se)
    {
        st[si]=arr[ss];
        return st[si];
    }

    ll mid = ss+ (se-ss)/2;
    st[si] = buildTree(st,ss,mid,arr,2*si+1)+
             buildTree(st,mid+1,se,arr,2*si+2);
    return st[si];
}


inline ll getn(){
	ll n=0, c=getchar();
	while(c < '0' || c > '9')
		c = getchar();
	while(c >= '0' && c <= '9')
		n = (n<<3) + (n<<1) + c - '0', c = getchar();
	return n;
}
ll dp[502][100005];



ll knapsack(ll val[],ll wt[],ll n,ll k)
{
	ll i,j;
	//memset(dp,0,sizeof(dp));
	for(i=0;i<=k;i++)
	for(j=0;j<=n;j++)
{	//dp[i][j]=0;
	if(i==0||j==0)
		dp[i][j]=0;
	else if(i<wt[j-1])
		dp[i][j]=dp[i][j-1];
	else
	dp[i][j]=max(val[j-1]+dp[i-wt[j-1]][j-1],dp[i][j-1]);
}

	return dp[k][n];

}



int main()
{

    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\mrmoh\\Desktop\\MCHEF.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

		std::ios_base::sync_with_stdio(0);
ll t,n,m,k,i,p,sum,q,rs,sum1,c1,j;
scanf("%lld",&t);
ll b[100005],a[100005],l[10005],r[10005],c[10005];
while(t--)
{
    map<ll,ll> cv;

	scanf("%lld%lld%lld",&n,&k,&m);

    ll arr[1005];
    ll st[1005];

		sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&p);
        arr[i]=p;
		sum+=p;

		if(p<0)
		a[i]=-p;
		else
		a[i]=0;

		b[i]=mod;
	//	printf("%lld ",a[i]);
	}

	buildTree(st,0,n-1,arr,0);
	//printf("\n");

	for(ll i=0;i<m;i++)
	{
		scanf("%lld%lld%lld",&l[i],&r[i],&c1);
		//printf("%lld %lld %lld\n",l,r,c);
		l[i]--;r[i]--;
		if(c1<=k)
		{
/*
		for(j=l[i];j<=r[i];j++)
		{
			if(b[j]>c1)
			{
			b[j]=c1;
			//printf("%lld %lld %lld \n",i,b[i],c);
			}
		}*/
		cv.insert(pair<ll,ll>(c1, i));
		}
	}
	multimap<ll,ll>::iterator it=cv.end();it--;

	for(;it!=cv.begin();it--)
    {
        updateTree2(st,0,0,n-1,l[(*it).second],r[(*it).second],(*it).first);
    }

        updateTree2(st,0,0,n-1,l[(*it).second],r[(*it).second],(*it).first);

	for(ll i=0;i<n;i++)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
/*
	for(i=0;i<n;i++)
	{
		printf("%lld ",b[i]);
	}
	printf("\n");
*/
	sum1=knapsack(a,c,n,k);
	//sum1=knapSack(k,b,a,n);
	//printf("%lld %lld \n",sum,sum1);
	sum+=sum1;
	printf("%lld\n",sum);
}

	return 0;
}
