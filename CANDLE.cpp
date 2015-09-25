#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll arr[10],comp[10],mini=100,ind=100,ind2,mini2=100;
        for(ll i=0;i<10;i++)
        {
            cin>>arr[i];
            comp[i]=0;

            if(mini>arr[i])
            {
                ind=i;
                mini=arr[i];
            }
        }
        arr[ind]=100;

        for(ll i=0;i<10;i++)
        {
            if(mini2>arr[i])
            {
                ind2=i;
                mini2=arr[i];
            }
        }

        ll i=1,count=1;

        if(ind==0)
        {
            ll ans=1;
            for(ll i=0;i<mini+1;i++)
            {
                ans*=10;
            }

            ll ans2=0;
            for(ll i=0;i<mini2;i++)
            {
                ind2+=ind2*10;
            }

            cout<<min(ind2,ans);

        }
        else
        {
            for(ll i=0;i<mini+1;i++)
                cout<<ind;
        }
        cout<<"\n";

        /*while(count)
        {
            ll t1=i;

            while(t1)
            {
                comp[t1%10]++;
                t1/=10;
            }

            //cout<<"\n";
            for(ll j=0;j<10;j++)
            {
                //cout<<comp[j]<<" "<<arr[j]<<" ";
                if(arr[j]<comp[j])
                {
                    count=0;
                    break;
                }
                comp[j]=0;
            }
            i++;
        }*/

        //cout<<--i<<"\n";
    }
}
