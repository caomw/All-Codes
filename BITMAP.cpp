#include <bits/stdc++.h>
#define long long int ll;

using namespace std;

int dist[200][200],r,c;
string s[200];

void bfs(int i,int j)
{
	queue<int> q;
	q.push(i);
	q.push(j);

	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		int y = q.front();
		q.pop();

		int dst = dist[x][y];
		if(c>y-1>0){
			q.push(x);
			q.push(y-1);
			dist[x][y-1]=min(dist[x][y-1],dst+1);}
		if(c>y+1>0){
			q.push(x);
			q.push(y+1);
			dist[x][y+1]=min(dist[x][y+1],dst+1);}
		if(r>x-1>0){
			q.push(x-1);
			q.push(y);
			dist[x-1][y]=min(dist[x-1][y],dst+1);}
		if(r>x+1>0){
			q.push(x+1);
			q.push(y);
			dist[x+1][y]=min(dist[x+1][y],dst+1);}
	}
/*		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				printf("%d ",dist[i][j]);
			printf("\n");
		}

printf("%d %d\n\n",i,j);

*/
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(0);
	
	int t;
	cin>>t;

	while(t--)
	{
		cin>>r>>c;

		for(int i=0;i<r;i++)
			cin>>s[i];

		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(s[i][j]=='1')
					dist[i][j] = 0;
				else
					dist[i][j] = 10000;
			}
		}

		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				bfs(i,j);
		}
		
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				printf("%d ",dist[i][j]);
			printf("\n");
		}



	}

}