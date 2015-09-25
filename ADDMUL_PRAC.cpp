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
//#define MAX int(1e5 + 10)

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
#define MAX 1000000
 struct node
 {
     ll left;
     ll right;
     ll val;
 };

 node tree[MAX];
 ll alazy[MAX],mlazy[MAX];
 ll arr[MAX];


 void buildTree(ll pos,ll l,ll r)
 {
     alazy[pos]=0;
     mlazy[pos]=1;

     tree[pos].left=l;
     tree[pos].right=r;
     ll mid=(l+r)/2;

     if(l==r)
     {
         tree[pos].val=arr[l]%mod;
         return;
     }

     buildTree(pos*2+1,l,mid);
     buildTree(pos*2+2,mid+1,r);
     tree[pos].val=(tree[2*pos+1].val+tree[2*pos+2].val)%mod;
 }

 void updateNode(ll pos)
 {
     ll left=tree[pos].left;
     ll right=tree[pos].right;

     tree[pos].val=(mlazy[pos]*tree[pos].val%mod+(1-left+right)*alazy[pos]%mod)%mod;

     if(left!=right)
     {
         mlazy[2*pos+1]=mlazy[2*pos+1]*mlazy[pos]%mod;
         mlazy[2*pos+2]=mlazy[2*pos+2]*mlazy[pos]%mod;

         alazy[pos*2+1]=(alazy[pos*2+1]*mlazy[pos]%mod+alazy[pos]%mod)%mod;
         alazy[pos*2+2]=(alazy[pos*2+2]*mlazy[pos]%mod+alazy[pos]%mod)%mod;

     }

     mlazy[pos]=1;
     alazy[pos]=0;

 }
 void add(ll l,ll r,ll pos,ll val)
 {
     ll left=tree[pos].left;
     ll right=tree[pos].right;
     ll v=val;
     updateNode(pos);

     if(right<l||r<left)
        return;

     if(l<=left&&r>=right)
     {
         tree[pos].val=(tree[pos].val+v*(right-left+1))%mod;

         if(left!=right)
         {
             alazy[2*pos+1]=(alazy[1+2*pos]+v)%mod;
             alazy[2*pos+2]=(alazy[2*pos+2]+v)%mod;
         }

         return;
     }

     add(l,r,2*pos+1,val);
     add(l,r,2*pos+2,val);

     tree[pos].val=tree[pos*2+1].val+tree[pos*2+2].val;
 }

 void mul(ll l,ll r,ll pos,ll val)
 {
     ll left=tree[pos].left;
     ll right=tree[pos].right;
     ll v=val;
     updateNode(pos);

     if(l>right||r<left)
        return;

     if(l<=left&&r>=right)
     {
         tree[pos].val=(tree[pos].val*v)%mod;

         if(left!=right)
         {
             alazy[2*pos+1]=(alazy[2*pos+1]*v)%mod;
             alazy[2*pos+2]=(alazy[2*pos+2]*v)%mod;

             mlazy[2*pos+1]=(mlazy[1+2*pos]*v)%mod;
             mlazy[2*pos+2]=(mlazy[2*pos+2]*v)%mod;
         }

         return;
     }

     mul(l,r,2*pos+1,val);
     mul(l,r,2*pos+2,val);

     tree[pos].val=tree[pos*2+1].val+tree[pos*2+2].val;

 }

 void fix(ll l,ll r,ll pos,ll val)
 {
     mul(l,r,pos,0);
     add(l,r,pos,val);
 }


 ll sum(ll l,ll r,ll pos)
 {
     ll left=tree[pos].left;
     ll right=tree[pos].right;
     updateNode(pos);

     if(l>right||r<left)
        return 0;

     if(l<=left&&r>=right)
     {
         return tree[pos].val;
     }

     //sum(l,r,2*pos+1);
     //sum(l,r,2*pos+2);

     tree[pos].val=tree[pos*2+1].val+tree[pos*2+2].val;

     return tree[pos].val;
 };

 void fastWrite(ll n){char sum[20];ll i=0;do{ sum[i++]=n%10+48;n=n/10;}while(n!=0);while(i>0){ putchar(sum[--i]);} putchar('\n');}
inline void get(ll &x){register ll c = getchar();x = 0;ll neg = 0;for(;((c<48 || c>57) && c != '-');c = getchar());if(c=='-') {neg=1;c=getchar();}for(;c>47 && c<58;c = getchar()) {x = 10*x + c - 48;}if(neg) x=-x;}

main()
{

    #ifndef ONLINE_JUDGE
        //freopen("C:\\Users\\mrmoh\\Desktop\\input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

    std::ios::sync_with_stdio(false);
//while(true)
{
/*
 for(ll i=0;i<MAX;i++)
 {
    alazy[i]=0;
    mlazy[i]=1;
 }
*/
    //memset(mlazy,1,sizeof(mlazy));
    ll n,q;
    get(n);get(q);
    //cin>>n>>q;

    //memset(lazy,0,sizeof(lazy));

    //ll arr[n+5];
    for(ll i=0;i<n;i++)
    {
        get(arr[i]);
        //cin>>arr[i];
        //cout<<lazy[i]<<" ";
    }




    buildTree(0,0,n-1);

/*
    for(ll i=0;i<3*n;i++)
        cout<<st[i]<<" ";
    cout<<"\n";

*/
    while(q--)
    {
        ll cs,l,r;
        get(cs);get(l);get(r);
        //cin>>cs>>l>>r;
        l--;r--;

        if(cs==1)
        {
            ll v;
            get(v);
            //cin>>v;
            add(l,r,0,v);
        }

        else if(cs==2)
        {
            ll v;
            get(v);
            //cin>>v;
            mul(l,r,0,v);

        }

        else if(cs==3)
        {
            ll v;
            get(v);
            //cin>>v;
            fix(l,r,0,v);

        }
        else if(cs==4)
        {
            fastWrite(sum(l,r,0));
            //cout<<sum(l,r,0)<<"\n";
        }
    }

}

}
