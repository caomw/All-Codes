//(҂>_<)
//<,︻╦╤─ ҉ ---- -M-A-R-K-!!!-R-O-X-O-R- ------
// /﹋\" BRATATATATATAT!!


#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<time.h>

#define ull unsigned long long int

#define imax INT_MAX
#define imin INT_MIN
#define LLmax LLONG_MAX
#define LLmin LLONG_MIN

#define FOR(i,a,b) for(int i= (int)a; i<= (int)b; i++)
#define rep(i,n) for(int i= int(1); i<= (int)n; i++)
#define FORd(i,a,b,d) for(int i=(int)a; i<= (int)b; i+=(int)d)

#define si(a) scanf("%d",&a);
#define sl(a) scanf("%lld",&a);
#define ss(a) scanf("%s",a);
#define sc(a) scanf("%c",&a);
#define su(a) scanf("%llu",&a);

#define pi(a) printf("%d\n",a);
#define pl(a) printf("%lld\n",a);
#define ps(a) printf("%s\n",a);
#define pu(a) printf("%llu\n",a);
#define pr(a) printf("a\n");

#define CLR(a) memset(a,0,sizeof(a));
#define SET(a) memset(a,-1,sizeof(a));

#define pb(x) push_back(x)
#define mp make_pair
#define pii pair<int,int>
#define pll pair<LL,LL>

#define gcd(a,b) __gcd(a,b)

#define mod int(1e9 +7)
#define MAX int(1e5 + 10)

#define VI vector<int>
#define VL vector<LL>
#define VS vector<string>
#define VC vector<char>

using namespace std;

typedef long long int ll;

/*
clock_t begin, end;
double time_spent;

begin = clock();
// here, do your time-consuming job
end = clock();
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
*/

void fastWrite(ll n){char sum[20];ll i=0;do{ sum[i++]=n%10+48;n=n/10;}while(n!=0);while(i>0){ putchar(sum[--i]);} putchar('\n');}
inline void get(ll &x){register ll c = getchar();x = 0;ll neg = 0;for(;((c<48 || c>57) && c != '-');c = getchar());if(c=='-') {neg=1;c=getchar();}for(;c>47 && c<58;c = getchar()) {x = 10*x + c - 48;}if(neg) x=-x;}


ll knapSack(ll W, ll wt[], ll val[], ll n)
{
   ll i, w;
   ll K[n+1][W+1];

   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }

   return K[n][W];
}

bool compare(const pair<ll,ll>&i, const pair<ll,ll>&j)
{
    return i.first < j.first;
}
ll l[1000006],r[1000006],c[1000006];//,cost[1000006];
main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Mohit\\Desktop\\input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

    ll t;
    get(t);

    while(t--)
    {
        vector<pair<ll,ll> >cv;
        ll n,k,m;
        get(n);get(k);get(m);

        ll arr[MAX],rating=0;
        for(ll i=0;i<n;i++)
        {
            get(arr[i]);
            rating+=arr[i];

            if(arr[i]<=0)
                arr[i]*=-1;
            else
                arr[i]=0;

            c[i]=LLONG_MAX;
            //cost[i]=LLONG_MAX;

        }

        for(ll i=0;i<m;i++)
        {
            ll c1;
            get(l[i]);get(r[i]);get(c1);
            l[i]--;r[i]--;

/*
		for(ll j=l[i];j<=r[i];j++)
		{
			if(cost[j]>c1)
			{
			cost[j]=c1;
			//printf("%lld %lld %lld \n",i,b[i],c);
			}
		}*/
            cv.push_back(pair<ll,ll>(c1, i));
        }

        sort(cv.begin(),cv.end(),compare);

        ll plef=l[cv.at(0).second],prig=r[cv.at(0).second];

        for(ll i=plef;i<=prig;i++)
            c[i]=cv.at(0).first;


        //cout<<plef<<" "<<prig<<"\n";
        for(ll i=1;i<cv.size();i++)
        {
            ll lef=l[cv.at(i).second];
            ll rig=r[cv.at(i).second];

            //cout<<plef<<" "<<prig<<"\n";
            if(lef<plef&&prig<rig)
            {
                for(ll j=lef;j<plef;j++)
                {
                    c[j]=cv.at(i).first;
                    //cout<<c[j]<<" "<<j<<" 1 \n";
                }

                for(ll j=prig+1;j<=rig;j++)
                {
                    c[j]=cv.at(i).first;
                    //cout<<c[j]<<" "<<j<<" 1 \n";
                }
            }

            else if(lef>plef&&prig<rig)
            {
                if(prig<lef)
                for(ll j=lef;j<=rig;j++)
                 {
                    c[j]=cv.at(i).first;
                    //cout<<c[j]<<" "<<j<<" 2 \n";
                 }
                else
                for(ll j=prig+1;j<=rig;j++)
                 {
                    c[j]=cv.at(i).first;
                    //cout<<c[j]<<" "<<j<<" 2 \n";
                 }

            }

            else if(lef<plef&&prig>rig)
            {
                if(rig<plef)
                for(ll j=lef;j<=rig;j++)
                 {
                    c[j]=cv.at(i).first;
                    //cout<<c[j]<<" "<<j<<" 3 \n";
                 }
                else
                for(ll j=lef;j<plef;j++)
                 {
                    c[j]=cv.at(i).first;
                    //cout<<c[j]<<" "<<j<<" 3 \n";
                 }

            }
            prig=max(rig,prig);
            plef=min(lef,plef);
            //cout<<l[cv.at(i).second]<<" "<<r[cv.at(i).second]<<"\n";
        }
/*
        for(ll i=0;i<5;i++)
            cout<<cost[i]<<" ";
        cout<<"\n";*/
       fastWrite(rating+knapSack(k,c,arr,n));
    }

}

