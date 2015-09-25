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

ll lazy[1000000],n=5;

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


void updateTree2(ll n,ll *st,ll node,ll ss,ll se,ll i ,ll j, ll val)
{
        if(lazy[node])
        {
            st[node]=min(st[node],lazy[node]*(1+se-ss));

            if(ss!=se)
            {
                if(lazy[node*2+1])
                    lazy[node*2+1]=min(lazy[node*2+1],lazy[node]);
                else
                    lazy[node*2+1]=lazy[node];

                if(lazy[node*2+2])
                    lazy[node*2+2]=min(lazy[node*2+2],lazy[node]);
                else
                    lazy[node*2+2]=lazy[node];
            }

            lazy[node]=0;
        }
/*
    for(ll i=0;i<3*n;i++)
        cout<<st[i]<<" ";
    cout<<" \n";
    cout<<ss<<" "<<se<<" "<<st[node]<<"\n";
*/
        if(ss>se || ss>j || se<i)
            {
                return;
            }

        if(ss>=i&&j>=se)
        {
            if(lazy[node])
                lazy[node]=min(val,lazy[node]);
            else
                lazy[node]=val;

           // cout<<lazy[node]<<" M\n";
    //        cout<<val<<" "<<ss<<" "<<se<<" "<<i<<" "<<j<<" eq\n";
            //if(ss>=i)

        //cout<<st[node]<<" x\n";
           if(ss!=se)
            {
                if(lazy[node*2+1])
                    lazy[node*2+1]=min(lazy[node*2+1],lazy[node]);
                else
                    lazy[node*2+1]=lazy[node];

                if(lazy[node*2+2])
                    lazy[node*2+2]=min(lazy[node*2+2],lazy[node]);
                else
                    lazy[node*2+2]=lazy[node];
            }

/*
if(st[node]==28)
cout<<"eeeeeeeeeeeeeeeeee1\n";
*/

            return;
        }
//24
       // if(ss<i||se>j)
        {


//st[node]=st[2*node+1]+st[2*node+2];
            ll mid = ss+ (se-ss)/2;
            updateTree2(n,st,node*2+1,ss,mid,i,j,val);
            updateTree2(n,st,node*2+2,mid+1,se,i,j,val);

       /*if(lazy[2*node+1])
        {
            st[2*node+1]=lazy[2*node+1]*(1+mid-ss);

            if(mid!=ss)
            {
                lazy[2*(2*node+1)+1]=lazy[2*node+1];
                lazy[2*(2*node+1)+2]=lazy[2*node+1];
            }

            lazy[2*node+1]=0;
        }

        if(lazy[2*node+2])
        {
            st[2*node+2]=lazy[2*node+2]*(se-mid);

            if(se!=mid+1)
            {
                lazy[2*(2*node+2)+1]=lazy[2*node+2];
                lazy[2*(2*node+2)+2]=lazy[2*node+2];
            }

            lazy[2*node+2]=0;
        }*/

            st[node]=min(st[node],st[2*node+1]+st[2*node+2]);
            /*cout<<st[node]<<" "<<node<<" "<<st[node*2+1]
            <<" "<<st[node*2+2];
            cout<<" P\n";
            */

  /*
if(st[node]==28)
cout<<st[2*node+2]<<" eeee\n";
*/
            return;
        }


        return;

}


ll knap[505][100005];

ll knapSack(ll val[],ll wt[],ll n,ll W)
{
    for(ll i=0;i<W+1;i++)
    {
        for(ll j=0;j<n+1;j++)
        {
            if(i==0||j==0)
                knap[i][j]=0;
            else if(i<wt[j-1])
                knap[i][j]=knap[i][j-1];
            else
                knap[i][j]=max(val[j-1]+knap[i-wt[j-1]][j-1],knap[i][j-1]);
        }
    }

    return knap[W][n];
}

ll st[1000000],m=0;
// print leaf nodes
void leafNodes(ll r,ll arr[],ll st[],ll k,ll c[],ll ss,ll se) {
    if(!r)
        m=0;
//leafNodes(0,arr,st,k,c);

    if(st[r]) {
        if(lazy[r])
        {

            st[r]=min(lazy[r]*(1+se-ss),st[r]);

            if(ss!=se)
            {
                if(lazy[2*r+1])
                    lazy[2*r+1]=min(lazy[2*r+1],lazy[r]);
                else
                    lazy[2*r+1]=lazy[r];

                if(lazy[2*r+2])
                    lazy[2*r+2]=min(lazy[2*r+2],lazy[r]);
                else
                    lazy[2*r+2]=lazy[r];
            }

            lazy[r]=0;

        }

        leafNodes(2*r+1,arr,st,k,c,ss,(ss+se)/2);
        leafNodes(2*r+2,arr,st,k,c,(ss+se)/2+1,se);

        if(st[2*r+1] ==0 && st[2*r+2] ==0) {


if(lazy[r])
    st[r]=min(st[r],lazy[r]);

            if(arr[m]!=0)
                c[m++]=st[r];
            else
                c[m++]=k+5;

            //cout<<st[r]<<" "<<lazy[r]<<"m ";//<<m<<"a ";
            return;
        }
    }

    return;
}

main()
{
        #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\mrmoh\\Desktop\\MCHEF.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
        #endif

         std::ios::sync_with_stdio(0);

         ll t;
         cin>>t;

         while(t--)
         {
             ll n,m;
             ll k;
             cin>>n>>k>>m;

             ll sum=0,arr[n+5],c[n+5];
             for(ll i=0;i<n;i++)
             {
                 cin>>arr[i];
                 sum+=arr[i];

                 c[i]=k+1;
                 if(arr[i]<0)
                    arr[i]=-arr[i];
                 else
                    arr[i]=0;
             }


              buildTree(st,0,n-1,c,0);

             ll flag=0;
             for(ll i=0;i<m;i++)
             {
                     ll c1,l,r;
                     cin>>l>>r>>c1;
                     l--;r--;

                     if(c1<=k)
                {
                    updateTree2(n,st,0,0,n-1,l,r,c1);
                     flag=1;
                 }

             }

            if(k==0)
                flag=0;

            if(flag)
            {

             leafNodes(0,arr,st,k,c,0,n-1);
/*

             cout<<"\n";
             for(ll i=0;i<n;i++)
                cout<<c[i]<<" ";
*/             //cout<<"\n";


             sum+=knapSack(arr,c,n,k);
            }

             cout<<sum<<"\n";
         }
}
