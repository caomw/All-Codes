#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin>>n;

    ll arr[n+5];
    for(ll i=0;i<n;i++)
    {
        char c[5];
        cin>>c;

        if(c[0]=='1'&&c[2]=='4')
        {
            arr[i]=25;
        }
        else if(c[0]=='1'&&c[2]=='2')
        {
            arr[i]=50;
        }
        else if (c[0]=='3'&&c[2]=='4')
        {
            arr[i]=75;
        }
    }
    sort(arr,arr+n);

    ll fourth=0,half=0,th4=0;
    for(ll i=0;i<n;i++)
    {
        if(arr[i]==25)
        fourth++;
        else if(arr[i]==50)
        half++;
        else if (arr[i]==75)
        th4++;
    }

    ll counti=1;
    counti+=fourth/4;
    counti+=half/2;
    counti+=(th4/4)*3;

    fourth%=4;
    half%=4;
    th4=th4%4;

    if(fourth>=th)
    {
        counti+=(fourth-th);
        fourth-=th;
        th=0;
    }

    if(th>=fourth)
    {
        counti+=(th-fourth);
        th-=fourth;
        fourth=0;
    }

    if(half>=fourth)
    {

    }




    fourth+=thfourth;
    cout<<fourth<<" "
    <<half<<" "<<thfourth<<" "
    <<counti<<"\n";

















}
