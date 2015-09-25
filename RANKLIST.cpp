#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        long long int n,s;
        scanf("%lld%lld",&n,&s);

        long long int comp=2,compsum=0;

        while(s-n>compsum)
        {
            compsum=comp*(comp+1)/2;
            compsum--;
            comp++;
        }

        printf("%lld\n",n-comp+1);

    }
}
