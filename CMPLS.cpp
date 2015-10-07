#include<stdio.h>
#include<conio.h>
#include<math.h>
typedef long long int ll;

main()
{
  ll n,p;
  float sum=0;

  scanf("%lld",&n);
  scanf("%lld",&p);

  float y[n+5];
  for(ll i=0;i<n;i++)
    scanf("%f",&y[i]);

  for(ll m =n+1;m<p+n+1;m++)
  {
    sum=0;

  for(ll i=0;i<n;i++)
  {
    float temp = 1;
    ll k=i;

    for(ll j=0;j<n;j++)
    {
      if(k!=j)
      {
        temp *=((m-j)/(k-j));
      }
    }
    sum+=y[i]*temp;
  }
  printf("%f ",sum);

  }

}
