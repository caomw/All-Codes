#include<iostream>
#include<cstring>
using namespace std;
#include<stdio.h>
#ifndef ONLINE_JUDGE
#define get getchar
#else
#define get getchar_unlocked
#endif
inline int f()
{
	int n=0,s=1;
	char p=get();
	if(p=='-')
		s=-1;
	while((p<'0' || p>'9') && p!=EOF && p!='-')
		p=get();
	if(p=='-')
		s=-1,p=get();
	while(p>='0' && p<='9' )
	{
		n=(n<<3)+(n<<1)+(p-'0');
		p=get();
	}
	return (n*s);
}
int main()
{
	int t, n,q,i,j,k,x,y,a[100005];
	//cin>>t;
	t=f();
    while(t--)
	{   memset(a,0,sizeof(a));
		n=f();
		q=f();
		while(n--)
		{
			//cin>>x>>y;
			x=f();
			y=f();
			a[x]++;
			a[y+1]--;

		}
		for(i=1;i<=100004;i++)
		a[i]+=a[i-1];
		while(q--)
		{
			x=f();
			printf("%d\n",a[x]);
		}
	}
	return 0;
}
