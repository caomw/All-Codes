#include <bits/stdc++.h>
using namespace std;


int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	while(true)
	{
		char str[5005];
		cin>>str;

		if(strlen(str)==1 and str[0]=='0')
			break;

		int val[5005],bin[5005],n=strlen(str),cumu[5005];
	/*
		if(n%2)
			n--;*/

		cumu[0]=0;
		val[0]=1;
		for(int i=1;i<strlen(str);i++)
		{
			cumu[i]=bin[i-1]=0;
			val[i]=0;

			if(str[i-1]=='1' or str[i-1]=='2')
			{
				if(str[i-1]=='1')
					bin[i-1]=1;
				else if('0'<str[i] and str[i]<'7')
					bin[i-1]=1;
			}
		}
/*
		for(int i=0;i<n;i++)			
			cout<<bin[i]<<" ";
		cout<<"\n";
*/
		val[0] =0;
		
		cumu[1]=cumu[0];
		if(bin[n-2])
			val[1]=1;
		cumu[1]+=val[1];

		cumu[2]=cumu[1];
		if(bin[n-3])
			val[2]=1;
		cumu[2]+=val[2];
/*	
		cout<<val[0]<<" "<<cumu[0]<<"\n";
		cout<<val[1]<<" "<<cumu[1]<<"\n";
		cout<<val[2]<<" "<<cumu[2]<<"\n\n";
*/
		for(int i=3;i<n;i++)
		{
			val[i] = 1;

			cumu[i]=cumu[i-1];
			
			if(bin[n-i-1])
				val[i]+=cumu[i-2];
			else
				val[i]=0;

			cumu[i]+=val[i];

//			cout<<val[i]<<" "<<cumu[i]<<"\n";
		}
		cout<<cumu[n-1]+1<<"\n";
	}
}