#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define maxi 2000000

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;

    while(t--)
    {
        char l1[200005],l2[200005];
        cin>>l1>>l2;

        ll n=strlen(l1);

        ll arr1[200005],arr2[200005];

        if(l1[0]=='#')
        arr1[0]=maxi;
        else
        arr1[0]=0;

        if(l2[0]=='#')
        arr2[0]=maxi;
        else
        arr2[0]=0;

            //cout<<arr1[0]<<"\n";
            //cout<<arr2[0]<<"\n\n";

        for(ll i=1;i<strlen(l1);i++)
        {
            arr1[i]=maxi;
            arr2[i]=maxi;

            if(l1[i]=='.')
            {
                arr1[i]=min(arr1[i-1],1+arr2[i-1]);
            }

            if(l2[i]=='.')
            {
                arr2[i]=min(arr2[i-1],1+arr1[i-1]);
            }

            //cout<<arr1[i]<<"\n";
            //cout<<arr2[i]<<"\n\n";
        }

        if(min(arr1[n-1],arr2[n-1])!=maxi)
        cout<<"Yes\n"<<min(arr1[n-1],arr2[n-1])<<"\n";
        else
        cout<<"No\n";

    }

}
