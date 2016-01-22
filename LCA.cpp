#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int t ;
	cin>>t;

	for(int l=0;l<t;l++)
	{
		cout<<"Case "<<l+1<<":\n";

		std::vector<vector<int> > v;
		int n;
		cin>>n;

		int par[n];
		for(int i=0;i<n;i++)
			par[i]=i;

		for(int i=0;i<n;i++)
		{
			std::vector<int> tempv;
			v.push_back(tempv);

			int k,temp;
			cin>>k;

			for(int j=0;j<k;j++)
			{
				cin>>temp;
				v[i].push_back(temp-1);
				par[temp-1] = i;
			}
		}
/*
		for(int i=0;i<n;i++)
		{
			cout<<"par["<<i+1<<"]="<<par[i]+1<<"\n";
			for(int j=0;j<v[i].size();j++)
				cout<<v[i][j]<<" ";
			cout<<"\n";
		}
*/
		int q=0;
		cin>>q;

		while(q--)
		{
			int a,b;
			cin>>a>>b;
			a--;b--;

			int ori_b=b,ori_a=a,flag=0;

			while(a!=b)
			{
				while(a!=b)
				{
					//cout<<"a="<<a+1<<" b="<<b+1<<"\n";
					if(par[b]==b)				
					{
						b=ori_b;
						break;
					}
					
					b=par[b];
				}
				if(a==b)
					break;
				a=par[a];
			}

			cout<<a+1<<"\n";
		}
	}
}