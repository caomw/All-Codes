#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int str2num(string str)
{
	int num=0,dec=1;
	for(int i=str.length()-1;i>=0;i--)
	{
		num+=(str[i]-'0')*dec;
		dec*=10;
	}
	return num;
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t ;
	cin>>t;


	while(t--)
	{
		string s[5];
		int flag[5];
//		cout<<"\n";

		for(int i=0;i<5;i++)
		{
			cin>>s[i];
			flag[i]=1;

			if(i==0 or i==2 or i==4)
			{
//				cout<<s[i]<<" ";
				
				for(int j=0;j<s[i].length();j++)
				{
					if(s[i][j]>'9' or s[i][j]<'0')
						flag[i]=0;
				}
//				cout<<flag[i]<<"\n";

			}
		}
		for(int i=0;i<5;i++)
		{

				if(not flag[i])
				{
					if(i==4)
					{
						int i1 = str2num(s[0]);
						int i2 = str2num(s[2]);
						cout<<i1<<" + "<<i2<<" = "<<i1+i2<<"\n";
					}
					else if(i==2)
					{
						int i1 = str2num(s[0]);
						int i3 = str2num(s[4]);
						cout<<i1<<" + "<<i3-i1<<" = "<<i3<<"\n";
					}
					else if(i==0)
					{
						int i2 = str2num(s[2]);
						int i3 = str2num(s[4]);
						cout<<i3-i2<<" + "<<i2<<" = "<<i3<<"\n";
					}
				}
		}
//		cout<<s[4]<<"\n";
	}
}