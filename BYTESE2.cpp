#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	ll t ;
	cin>>t;

	while(t--)
	{
		ll n;
		cin>>n;

		int st[n+1],ed[n+1];
		for(int i=0;i<n;i++)
			cin>>st[i]>>ed[i];

		sort(st,st+n);
		sort(ed,ed+n);

		int s=0,e=0,sum=0,maxi=0,i=0,j=0;
		while(i<n and j<n)
		{
//			cout<<st[i]<<"=st ed="<<ed[j]<<"\n";
			if(st[i]>ed[j])
			{
				j++;
				sum--;
			}
			else if(st[i]<ed[j])
			{
				i++;
				sum++;
			}
			else
			{
				i++;
				j++;
			}

//			cout<<st[i]<<"=st ed="<<ed[j]<<"\n\n";
			
			maxi = max(maxi,sum);
		}
		sum += n-i;
		maxi = max(maxi,sum);

		cout<<maxi<<"\n";
	}

	
}