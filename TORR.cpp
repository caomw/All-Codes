//(҂>_<)
//<,︻╦╤─ ҉ ---- -M-A-R-K-!!!-R-O-X-O-R- ------
// /﹋\" BRATATATATATAT!!


#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
//#include<stdio.h>
#include<time.h>
//#include<climits>

#define ull unsigned long long int

#define imax INT_MAX
#define imin INT_MIN
#define LLmax LLONG_MAX
#define LLmin LLONG_MIN

#define FOR(i,a,b) for(int i= (int)a; i<= (int)b; i++)
#define rep(i,n) for(int i= int(1); i<= (int)n; i++)
#define FORd(i,a,b,d) for(int i=(int)a; i<= (int)b; i+=(int)d)

//#define pr() printf("Reached here 1...\n");
//#define pr1() printf("Reached here 2...\n");
//#define gc getchar_unlocked

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
//#define arg(a,N) rep(i,N)si(a[i]);

#define CLR(a) memset(a,0,sizeof(a));
#define SET(a) memset(a,-1,sizeof(a));

//#define str strlen
#define pb(x) push_back(x)
#define mp make_pair
#define pii pair<int,int>
#define pll pair<LL,LL>
//#define F first
//#define S second
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

void fastWrite(ll n)
{char sum[20];ll i=0;do{ sum[i++]=n%10+48;n=n/10;}while(n!=0);while(i>0){ putchar(sum[--i]);} putchar('\n');}inline void get(ll &x){register ll c = getchar();x = 0;ll neg = 0;for(;((c<48 || c>57) && c != '-');c = getchar());
if(c=='-') {neg=1;c=getchar();}for(;c>47 && c<58;c = getchar()) {x = (x<<1) + (x<<3) + c - 48;}if(neg) x=-x;
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Mohit\\Desktop\\input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

    ll t;
    get(t);

    while(t--)
    {
        ll n,m;
        get(n);get(m);

        ll mini[n+5],maxi[n+5],arr[n+5];

        get(arr[0]);
        mini[0]=arr[0];

        for(ll i=1;i<n;i++)
        {
            get(arr[i]);

            if(arr[i]<mini[i-1])
                mini[i]=arr[i];
            else
                mini[i]=mini[i-1];
        }

        maxi[n-1]=arr[n-1];

        ll diff=0,maxdiff=0;
        for(ll i=n-2;i>-1;i--)
        {

            if(arr[i]>maxi[i+1])
                maxi[i]=arr[i];
            else
                maxi[i]=maxi[i+1];

        }

        ll ind;
        for(int i=0;i<n-1;i++)
        {
            /*cout<<mini[i]<<" "
            <<maxi[i]<<"\n";*/
            diff=maxi[i+1]-mini[i];

            if(diff>maxdiff)
            {
                ind=i;
                maxdiff=diff;
            }
        }



        if(maxdiff<0)
        fastWrite(m);

        else
        {
        ll bcars=m/mini[ind];
        m%=mini[ind];

        m+=bcars*maxi[ind];
        fastWrite(m);

        }
    }


}

