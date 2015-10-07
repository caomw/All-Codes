#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi pair<ll,ll>
#define ppi pair<pi,ll>
#define mp make_pair
bool visit[185][185];
char a[185][185];
bool ifvalid(ll p,ll q,ll n)
{
    if((p>=0&&p<n)&&(q>=0&&q<n))
    {
        if(visit[p][q])
        return 0;
        else
        {
        visit[p][q]=1;
        return 1;
        }


    }

    return 0;
}
void dfs(ll i,ll j,ll n)
{
    list<ppi>kl;
    ll p,q,val;
    kl.push_front(mp(mp(i,j),0));
    visit[i][j]=1;
    while(!kl.empty())
    {
    ppi tp=kl.back();
    kl.pop_back();
    p=tp.first.first;
    q=tp.first.second;
    val=tp.second;

    if(a[p][q]=='1')
    {printf("%lld ",val);
    return ;
    }

    if(ifvalid(p+1,q,n))
    kl.push_front(mp(mp(p+1,q),val+1));

    if(ifvalid(p,q,n))
    kl.push_front(mp(mp(p,q),val+1));

    if(ifvalid(p,q,n))
    kl.push_front(mp(mp(p,q),val+1));

    if(ifvalid(p,q,n))
    kl.push_front(mp(mp(p,q),val+1));

    if(ifvalid(p,q,n))
    kl.push_front(mp(mp(p,q),val+1));

    if(ifvalid(p,q,n))
    kl.push_front(mp(mp(p,q),val+1));

    if(ifvalid(p,q,n))
    kl.push_front(mp(mp(p,q),val+1));

    if(ifvalid(p,q,n))
    kl.push_front(mp(mp(p,q),val+1));



    }



return ;
}

int main()
{
    ll t,n,m,i,j;
    cin>>t;

    while(t--)
    {

        ll n,m;
        cin>>n>>m;
        for(i=0;i<n;i++)
        scanf("%s",a[i]);

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
            dfs(i,j,n);
            }
            printf("\n");
        }

    }
    return 0;
}
