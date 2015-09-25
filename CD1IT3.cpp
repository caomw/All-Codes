#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long int n,k,i,j,flag;
	scanf("%lld %lld",&n,&k);
	long long int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	flag = 0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]+a[j])==k)
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
