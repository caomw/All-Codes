#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int h,w;
string grid[105];

int dirx[]={0,0,0,1,1,1,-1,-1,-1};
int diry[]={0,1,-1,0,1,-1,0,1,-1};

char testArray[]="ALLIZZWELL";
int visited[105][105];

int flag;

void init()
{	
	flag=0;
	
	for(int i=0;i<h;i++)
		for(int j=0;j<w;j++)
			visited[i][j] = 0;
	return;
}

void print()
{
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
			cout<<visited[i][j]<<" ";
		cout<<"\n";
	}
	cout<<"\n";
	
}
void dfs(int i,int j,int count=1)
{
	print();
	
	if(count>=strlen(testArray))
	{
		//cout<<"FLAGGED\n";
		flag=1;
		return;
	}

	visited[i][j] = -count;

	for(int k=1;k<9;k++)
	{
		int ni = i+dirx[k];
		int nj = j+diry[k];

		if(ni<h and nj<w)
			if(ni>=0 and nj>=0)
			{
				if(visited[ni][nj]>=0 and visited[ni][nj]<count)			
					if(grid[ni][nj]==testArray[count])
					{
						/*
						if(grid[ni][nj]=='A')
							dfs(ni,nj);*/
						dfs(ni,nj,count+1);

						cout<<"backed\n";
						cout<<ni<<"=ni nj="<<nj<<"\n";
						visited[ni][nj] = abs(visited[ni][nj]);
						print();
					}

			}
				
	}
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	int t=0;
	cin>>t;

	while(t--)
	{
		init();

		cin>>h>>w;

		for(int i=0;i<h;i++)
			cin>>grid[i];

		for(int i=0;i<h;i++)
			for(int j=0;j<w;j++)
				if(grid[i][j]=='A' and not visited[i][j])
					dfs(i,j);


		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}