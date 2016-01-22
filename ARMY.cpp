#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int t ;
	cin>>t;

	while(t--)
	{
		ll g,m;
		cin>>g>>m;

		std::vector<int>  god,mecha;
		int temp;

		for(int i=0;i<g;i++)
			cin>>temp,god.push_back(temp);
		
		for(int i=0;i<m;i++)
			cin>>temp,mecha.push_back(temp);

		sort(god.begin(),god.end());
		sort(mecha.begin(),mecha.end());

		int gt=0,mt=0;
		while(gt!=g and mt!=m)
		{
			//cout<<god[gt]<<" "<<mecha[mt]<<"\n";
			if(god[gt]<mecha[mt])
				gt++;
			else if(god[gt]>mecha[mt])
				mt++;
			else if(god[gt]==mecha[mt])
				mt++;
		}


		if(gt==g and mt==m)
			cout<<"uncertain\n";
		else if(mt==m)
			cout<<"Godzilla\n";
		else if(gt==g)
			cout<<"MechaGodzilla\n";


	}
}