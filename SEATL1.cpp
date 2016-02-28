#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll vis[1000005];
main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
 
	ll t;
	scanf("%lld",&t);
 
	while(t--)
	{
		ll r,c,gmaxi=0,maxi=0;
		scanf("%lld%lld",&r,&c);

		if(r<12 and c<12 and 0)
		{
			ll grid[r+5][c+5],counti[1000005];

			for(ll i=0;i<r;i++)
				for(ll j=0;j<c;j++)
				{
					scanf("%lld",&grid[i][j]);
					counti[grid[i][j]] = 0;
				}

			for(ll i=0;i<r;i++)
				for(ll j=0;j<c;j++)
				{
					ll maxLim = max(r,c);
					for(ll k=0;k<maxLim;k++)
					{
						if(k<r)
						{
							counti[grid[k][j]]++;
							maxi = max(maxi,counti[grid[k][j]]);
						}
						if(k<c)
						{
							if(k==j)
								continue;

							counti[grid[i][k]]++;
							maxi = max(maxi,counti[grid[i][k]]);
						}
					}
					for(ll k=0;k<maxLim;k++)
					{
						if(k<r)
							counti[grid[k][j]]=0;
						
						if(k<c)
							counti[grid[i][k]]=0;
					}

					gmaxi = max(gmaxi,maxi);
					maxi = 0;
				}

			printf("%lld\n",gmaxi);
		}

		else
		{
			std::map<ll,std::map<ll,ll > > veci,vecj;//(1000005);
			std::map<ll,std::map<ll,ll > >::iterator itnumi,itnumj;
			map<ll,ll >::iterator itxyi,itxyj;
			
			for(ll i=0;i<r;i++)
				for(ll j=0;j<c;j++)
				{
					ll k;
					scanf("%lld",&k);

					veci[k][i]++;
					vecj[k][j]++;
					//cout<<k<<" "<<i<<" "<<j<<"\n";

					//cout<<veci[k][i]<<" "<<vecj[k][j]<<"\n";
				}

			ll gmax = 0;
			for(itnumi = veci.begin(),itnumj = vecj.begin();itnumi!=veci.end();itnumi++,itnumj++)
			{
//				printf("%lld\n",itnumi->first);
				std::vector<ll> vi,vj;
				ll maxi=0,maxj=0;

				for(itxyi=veci[itnumi->first].begin(),itxyj=vecj[itnumj->first].begin();itxyj!=vecj[itnumj->first].end();itxyi++,itxyj++)
				{
//					cout<<itxyi->first<<" "<<itxyj->first<<"\n";
//					cout<<veci[itnumi->first][itxyi->first]<<" "<<vecj[itnumj->first][itxyj->first]<<"\n\n";

					if(maxi==veci[itnumi->first][itxyi->first])
					{
						maxi = veci[itnumi->first][itxyi->first];
						vi.push_back(itxyi->first);
					}
					else if(maxi<veci[itnumi->first][itxyi->first])
					{
						vi.clear();
						vi.push_back(itxyi->first);
					}
					if(maxj==vecj[itnumj->first][itxyj->first])
					{
						maxj = vecj[itnumj->first][itxyj->first];
						vj.push_back(itxyj->first);
					}
					else if(maxj<vecj[itnumj->first][itxyj->first])
					{
						vj.clear();
						vj.push_back(itxyj->first);
					}
				}

			}

		}
	}
} 