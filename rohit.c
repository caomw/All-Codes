#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007
typedef long long int ll;
inline ll getn(){
	ll n=0, c=getchar();
	while(c < '0' || c > '9')
		c = getchar();
	while(c >= '0' && c <= '9')
		n = (n<<3) + (n<<1) + c - '0', c = getchar();
	return n;
}
#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))
void go(ll n,ll first,ll last)
{
	ll q,r,b,a,i,j;
	j=n;
	if(n%10==0&&((n/10>=first)&&(n/10<=last)))
	return ;
	q=n<<1;
	r=q+n;
	ll vd[10];
	memset(vd,0,sizeof(vd));

	while(n)
	{
		a=n%10;
		vd[a]++;
		n/=10;

	}
	n=q;
	while(n)
	{
		a=n%10;
		vd[a]++;
		n/=10;

	}
	n=r;
	while(n)
	{
		a=n%10;
		vd[a]++;
		n/=10;

	}
	b=0;
	for(i=1;i<10;i++)
	if(vd[i]!=1)
	{
		b=1;
		break;
	}

	if(b)
	return ;
	else
	printf("%lld\n",j);


}
int main()
{

	ll n,m,i;
	n=getn();
	m=getn();

	for(i=n;i<=m;i++)
	go(i,n,m);

return 0;
}
