#include <bits/stdc++.h>
using namespace std;

int matrixChainMax(int n,char str[])
{
	int maxi[n][n];
	for(int i=0;i<n;i++)
		maxi[i][i] = str[2*i]-'0';

	for(int l=2;l<n+1;l++)
	{
		for(int i=0;i<n-l+1;i++)
		{
			int j = i+l-1;
			if(i!=j)
				maxi[i][j] = -INT_MAX;
	
			for(int k=i;k<j;k++)
			{
				int q;
				if(str[2*k+1]=='*')
					q = maxi[i][k] * maxi[k+1][j];// + p[i-1]**p[j]
				else if(str[2*k+1]=='+')
					q = maxi[i][k] + maxi[k+1][j];// + p[i-1]**p[j];

				maxi[i][j] = max(q,maxi[i][j]);
			}
		}
	}

	return maxi[0][n-1];
}

int matrixChainMin(int n,char str[])
{
	int m[n][n];
	for(int i=0;i<n;i++)
		m[i][i] = str[2*i]-'0';

	for(int l=2;l<n+1;l++)
	{
		for(int i=0;i<n-l+1;i++)
		{
			int j = i+l-1;
			if(i!=j)
				m[i][j] = INT_MAX;
	
			for(int k=i;k<j;k++)
			{
				int q;
				if(str[2*k+1]=='*')
					q = m[i][k] * m[k+1][j];// + p[i-1]**p[j]
				else if(str[2*k+1]=='+')
					q = m[i][k] + m[k+1][j];// + p[i-1]**p[j];

				m[i][j] = min(q,m[i][j]);
			}
		}
	}

	return m[0][n-1];
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;

	while(t--)
	{
		char str[105];
		cin>>str;

		int n = 1+(strlen(str)/2);
		int arr[n];
		char sign[n-1];
	
		cout<<matrixChainMax(n,str);
		cout<<" ";
		cout<<matrixChainMin(n,str);
		cout<<"\n";
	}
}