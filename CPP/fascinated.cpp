#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll l,u,arr[15];

    ll check[100000],k=0;
    scanf("%lld%lld",&l,&u);

    for(ll i=0;i<10;i++)
        arr[i]=0;


    for(ll i=l;i<=u;i++)
    {
        for(ll j=0;j<k;j++)
        {
            if(!(i%check[j])&&!(i%check[j]))
            {
                i++;
                break;
                }//<<"\n";
        }
        if(i>u)
            break;

        ll fir=i;
        ll sec=i*2;
        ll th=i*3;
        ll flag=1;
        //cout<<th<<"asdasdasdas"<<i;

        while(fir)
        {
        //cout<<fir%10<<"\n";
            arr[fir%10]++;
            fir/=10;
            //cout<<fir<<"\n";
            /*
            for(int i=0;i<10;i++)
                cout<<arr[i]<<" ";
            cout<<"\n";*/
        }
        //cout<<"\n";
        while(sec)
        {
        //cout<<sec%10<<"\n";
            arr[sec%10]++;
            sec/=10;
            /*for(int i=0;i<10;i++)
                cout<<arr[i]<<" ";
          *///  cout<<"\n";
        }

        //cout<<"\n";
        //cout<<th<<"asdas";
        while(th)
        {
        //cout<<th%10<<"\n";
            arr[th%10]++;
            th/=10;
            /*for(int i=0;i<10;i++)
                cout<<arr[i]<<" ";
          *///  cout<<"\n";
        }
        //cout<<"\n";
/*
            for(int i=0;i<10;i++)
                cout<<arr[i]<<" ";
            cout<<"\n";
*/
        for(ll j=1;j<10;j++)
        {
            if(arr[j]!=1)
                flag=0;
            arr[j]=0;
            arr[0]=0;
        }

        if(flag)
        {
        printf("%lld\n",i),
        check[k++]=i;
        }

    }
    return 0;

}
