
#include<stdio.h>
bool sum[10000001];
int arr[100001],sum_so_far;
int dp(int s,int N)
{
	sum_so_far=0;
	int i,j,k,t,z;
	j=0;
	k=1;
	s/=2;

	for(i=1;i<=s;i++)
		sum[i]=false;

	sum[0]=true;

	for(z=0;z<N;z++)
	{
		for(i=sum_so_far+arr[z];i>=arr[z];i--)
		{
			if(i<=s and sum[i-arr[z]])
			{
				if(sum[i])
				{
					printf("YES\n");
					return 1;
				}
				else
					sum[i]=true;
			}
		}

		sum_so_far+=arr[z];
	}
	return 0;
}
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

int T;
scanf("%d",&T);
while(T--)
{
int N,s=0,f,i;
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("%d",&arr[i]);
s+=arr[i];
}
f=dp(s,N);
if(!f)
printf("NO\n");
}
return 0;
}