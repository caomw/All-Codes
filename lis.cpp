#include<bits/stdc++.h>

int max(int a,int b)
{
	if(a>b)
		return a;

	return b;
}

int knapSack(int W,int wt[],int val[],int n)
{
	int knap[n+1][W+1];
	

	for(int i=0;i<=n;i++)
	{
		for(int w=0;w<=W;w++)
		{
			if(!i or !w)
				knap[i][w]=0;

			else if(wt[i-1]<=W)
				knap[i][w] = max(knap[i-1][w], knap[i-1][w-wt[i-1]]+val[i-1]);
			
			else
				knap[i][w] = knap[i-1][w];
		}
	}

	return knap[n][W];
}


int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    printf("%d", knapSack(W, wt, val, n));
    return 0;
}