#include<string.h>
#include<stdio.h>
typedef int ll;

int main()
{
    ll t;
    scanf("%d",&t);

    while(t--)
    {
        ll n,k,data[1005],hash[2000],l=0;
        scanf("%d%d",&n,&k);

        memset(hash,0,sizeof(hash));
        for(ll i=0;i<n;i++)
        {
            ll t1;
            scanf("%d",&t1);

            if(hash[t1]==0)
            {
                hash[t1]=1;
                data[l++]=t1;
            }
        }
        n=l;

        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n-1;j++)
            {
                ll ans=data[i]^data[j];

                if(hash[ans]==0)
                {
                    hash[ans]=1;
                    data[n++]=ans;
                }
            }
        }

        ll maxi=k;
        for(ll i=0;i<n;i++)
        {
            if(maxi<data[i]^k)
                maxi=data[i]^k;
        }

        printf("%d\n",maxi);
    }
}
