#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
typedef long long int ll;

ll conv[30]={-1,1,2,3,4,5,
            8,9,10,11,12,
            15,16,17,18,19,
            22,23,24,25,26,
            29,30
            };
int main()
{
    ll arr[6][30],qa[6];

    char c[6][100000];
    for(ll i=0;i<5;i++)
    {
        qa[i]=0;
        scanf("%s",c[i]);
        for(ll j=0;j<22;j++)
        scanf("%lld",&arr[i][j]);
    }

    ll sum=0;
    while(true)
    {
        //printf("a\n");
        ll day,q;
        char bus,comp[100000],s='S';
        scanf("%lld",&day);

        if(day==-1)
            break;

        scanf("%s%s%lld",&bus,&comp,&q);

day--;
        ll flag=1;
        for(ll i=1;i<23;i++)
            if(day==conv[i])
            day=i,flag=0;

/*
        if(flag)
            continue;*/
//day--;
        if(bus==s)
           q*=-1;

        cout<<day<<" "<<bus<<" "<<comp<<" "<<q<<"\n";
        for(ll i=0;i<5;i++)
//            cout<<c[i]<<"\n";
        if(strcmp(comp,c[i])==0)//comp==c[i])
        {
            qa[i]+=q;


            sum+=arr[i][day]*q;
            //cout<<qa[i]<<" "<<i<<"\n";
        }
    }
// 22000 + 150*260 - 50*260
//-4000
//40*200
// 70*200
/*
220*100
22000
260*150
39000
200*40
8000
260*-50
-13000
200*70
14000
*/
    for(ll i=0;i<5;i++)
        if(qa[i])
            printf("%s %lld\n",c[i],qa[i]);
    printf("%lld\n",sum);

}
