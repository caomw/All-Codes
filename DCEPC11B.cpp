#include <bits/stdc++.h>
using namespace std;
#define LL long long
LL pow_mod(LL a,LL b,LL m)
{
 LL x=1,y=a;
 while(b>0)
 {
  if(b & 1)
   x=(x*y)%m;
  y=(y*y)%m;
  b>>=1;
 }
 return x;
}
int main()
{
		freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

 int t;
 scanf("%d",&t);
 while(t--)
 {
  LL n,p,i,result=1,temp;
  scanf("%lld%lld",&n,&p);
  if(n>=p)
  {
   printf("0\n");
   continue;
  }
  for(i=n+1;i<p;i++)
  {
//   temp=pow_mod(i,p-2,p);
   result=(result*i)%p;
  }
  result = pow_mod(result,p-2,p);
  printf("%lld\n",p-result);
 }
 return 0;
}