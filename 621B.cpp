#include <bits/stdc++.h>
using namespace std;

int bishop[1005][1005];
main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	
	int n;
	scanf("%d",&n);

	std::vector<pair<int,int> > vec;
	for(int i=0;i<n;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		vec.push_back(make_pair(a,b));
		bishop[a][b]=1;
	}

	int count=0;
	sort(vec.begin(),vec.end());
	for(int k=0;k<n;k++)
	{
		int i,j;
		i = vec[k].first;
		j = vec[k].second;

		while(++i<1005 and ++j<1005)
			count+=(bishop[i][j]);

		i = vec[k].first;
		j = vec[k].second;
		while(++i<1005 and --j>-1)
			count+=(bishop[i][j]);
	}
	printf("%d",count );

}