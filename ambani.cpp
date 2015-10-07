#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>
#include<string.h>
typedef long long int ll;

int main()
{

    char f[1000000];
    cin>>f;

    ll val[200],cost=0,quan[200];
    for(ll i=0;i<200;i++)
    quan[i]=0;

    while(i!=strlen(f))
    {
        char nam[10],b[10];
        //scanf("%s",&nam);
        cin>>nam;

        if(strlen(nam)==1)
        {
            ll q;
            //scanf("%s%d",&nam,&q);
            cin>>nam>>q;
            //cout<<nam<<" "<<q<<"\n";

            ll num;
            num=nam[1]-'1';
            cost+=val[num]*q;
            quan[num]+=q;
            cout<<"Item purchased: P"<<num+1<<"\n";
            cout<<"Quantity: "<<q<<"\n";
        }

        else if(strlen(nam)==2)
        {
            ll num,price;
            num=nam[1]-'1';
            cin>>price;


            //cout<<num<<" "<<price<<"\n";
            //scanf("%lld",price);

            ll dig=price%10,p=1;

            if((price<=100)&&dig>=0&&dig<7)
            {
                val[num]=7*(price/10);
                val[num]+=price%10;
            }

            else
            {

            printf("Invalid Input\n");
            return 0;}


            if(p)
            cout<<"Product Name: P"<<num+1<<"\n"
            <<"Price: "<<val[num]<<"\n";

        }
    }

    if(cost)
    cout<<"Total Cost Incurred For Alicia: "<<cost<<"\n";
    else
        cout<<"No Items are Added to Cart\n";
}
