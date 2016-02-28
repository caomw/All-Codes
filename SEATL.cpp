#include <bits/stdc++.h>
using namespace std;
typedef int ll;
 
vector<ll> vec[1000005];
ll grid[1000005];
ll visi[1000005];
ll visj[1000005];
 
main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
 
	ll t;
	scanf("%d",&t);
 
	while(t--)
	{
		ll r,c,gmaxi=1;
		scanf("%d%d",&r,&c);
 
		ll p=0,maxim=0;

		for(ll i=0;i<r;i++)
			for(ll j=0;j<c;j++)
			{
				scanf("%d",&grid[p]);
				vec[grid[p]].push_back(i*c+j);

				maxim = max(grid[p++],maxim);
			}
			
		for(ll k=0;k<=maxim+1;k++)
		{
			std::vector<ll> mveci,mvecj;

			if(vec[k].size()<2)
			{
				vec[k].clear();
				continue;
			}

			ll maxi=1,maxj=1;
			for(ll j=0;j<vec[k].size();j++)
			{
				visi[vec[k][j]/c]++;
				if (maxi<visi[vec[k][j]/c])
				{
					maxi = visi[vec[k][j]/c];
					mveci.clear();
					mveci.push_back(vec[k][j]/c);
				}
				else if (maxi==visi[vec[k][j]/c])
					mveci.push_back(vec[k][j]/c);
				
				visj[vec[k][j]%c]++;
				if (maxj<visj[vec[k][j]%c])
				{
					maxj = visj[vec[k][j]%c];
					mvecj.clear();
					mvecj.push_back(vec[k][j]%c);
				}
				else if (maxj==visj[vec[k][j]%c])
					mvecj.push_back(vec[k][j]%c);
			}

			for(ll i=0;i<mveci.size();i++)
				for(ll j=0;j<mvecj.size();j++)
					gmaxi = max(gmaxi,maxi+maxj-(grid[mveci[i]*c+mvecj[j]]==k));

			for(ll j=0;j<vec[k].size();j++)
			{
				visi[vec[k][j]/c]=0;
				visj[vec[k][j]%c]=0;
			}

			vec[k].clear();
		}
 
		printf("%d\n",gmaxi);	
	}
}  