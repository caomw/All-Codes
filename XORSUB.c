#include<string.h>
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,k,data[1005],hash[2000],i=0,j=0,l=0;
        scanf("%d %d",&n,&k);

        memset(hash,0,sizeof(hash));
        for(i=0;i<n;i++)
        {
            int t1;
            scanf("%d",&t1);

            if(hash[t1]==0)
            {
                hash[t1]=1;
                data[l++]=t1;
            }
        }
        n=l;

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                int ans=data[i]^data[j];

                if(hash[ans]==0)
                {
                    data[n]=ans;
                    hash[ans]=1;
                    n++;
                }
            }
        }

        int maxi=k;
        for(i=0;i<n;i++)
        {
            if(maxi<k^data[i])
                maxi=k^data[i];
        }

        printf("%d\n",maxi);
    }
}

