#include <stdio.h>
#include<math.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--){
   long long int n,k,s=0,z,arr[101000],i;
   scanf("%lld %lld",&n,&k);
   for(i=0;i<n;i++)
   {
       scanf("%lld",&arr[i]);
       arr[i]-=k;
   }
   long long int so=0,end=0;
   for(i=0;i<n;i++)
   {end+=arr[i];
    if(end<0)
        end=0;
    if(end>so)
        so=end;
   }
   printf("%lld\n",so);

  }

    return 0;
}
