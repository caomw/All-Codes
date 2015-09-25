#include<stdio.h>
typedef long long int ll;
//#include<bits/stdc++.h>
//using namespace std;

int main()
{
 ll t;
 scanf("%lld",&t);

 while(t--)
 {
    ll f,b,t,o;
    scanf("%lld%lld%lld%lld",&f,&b,&t,&o);

    ll div,temp,dist=0,time=0,lev=1;

    b=f-b;
    temp=f+b;

div=o/b;
time=div*temp*t;

  /*
    while(dist<o)
    {
      //  cout<<time<<" "<<dist<<"\n";
        if(lev==1)
        {
            lev=-1;
            time+=t*f;
            dist+=f;
        }
        else if(lev==-1)
        {
            lev=1;
            time+=t*b;
            dist-=b;
        }

    }
*/
   // cout<<time<<" ";
    //lev*=-1;

        //if(lev==1)
        {
            //lev=-1;
            //time-=t*f;
            time+=t*(o-dist);
        }

    //cout<<time<<"\n";
    printf("%lld\n",time)
;
 }
}




