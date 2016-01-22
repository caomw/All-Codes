#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int h,w,maxi;
string grid[55];
int chain[55][55];

int dirx[]={0,0,0,1,1,1,-1,-1,-1};
int diry[]={0,1,-1,0,1,-1,0,1,-1};

void dfs(int i,int j,int sum_)
{
	if(chain[i][j]>=sum_)
		return;

	chain[i][j] = sum_;
	maxi = max(chain[i][j],maxi);

	for(int k=1;k<9;k++)
	{
		int ni = i+dirx[k];
		int nj = j+diry[k];

		if(ni<h and nj<w)
			if(ni>=0 and nj>=0)
			{
				if(grid[ni][nj]-grid[i][j]==1)
					dfs(ni,nj,sum_+1);

				if(grid[ni][nj]=='A')
					dfs(ni,nj,1);
			}
	}
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t=0;
	while(true)
	{	
		t++;
		maxi=1;
		cin>>h>>w;

		if(h+w==0)
			break;

		for(int i=0;i<h;i++)
			cin>>grid[i];

		for(int i=0;i<h;i++)
			for(int j=0;j<w;j++)
				chain[i][j]=0;

		dfs(0,0,1);		
		cout<<"Case "<<t<<": "<<maxi<<"\n";
	}
}