#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    std::ios::sync_with_stdio(0);
    ll n,m;
    cin>>n>>m;

    ll arr[n+5][m+5],sum[n+5];
    char c;

    for(ll i=0;i<n;i++)
    {
    sum[i]=0;
    for(ll j=0;j<m;j++)
    {
        cin>>c;
        if(c=='0')
        arr[i][j]=0;
        else
        arr[i][j]=1;

       // cout<<arr[i][j];
    }//,cout<<arr[i][j];//sum[i]+=arr[i][j];
    //cout<<"\n";
    }

    ll q;
    cin>>q;

    while(q--)
    {
        ll r,c;
        cin>>r>>c;
        r--;c--;

        arr[r][c]=1-arr[r][c];
    }

    for(ll i=0;i<n;i++)
    {
    for(ll j=0;j<m;j++)
    {
    //cout<<arr[i][j];
       // if(arr[i][j])
        sum[i]+=arr[i][j];
    }
    /*
       cout<<" "<<sum[i];

cout<<"\n";*/
    }

    ll maxi=-1,flag=1,ind;
    for(ll i=0;i<n;i++)
    {
//cout<<sum[i]<<" "<<maxi<<"\n";
        if(sum[i]>maxi)
        {
            maxi=sum[i];
            ind=i;
            flag=1;
        }

        else if(sum[i]==maxi)
        {
        flag=0;
        //cout<<"Tie\n";
        //break;
        }
    }
    if(flag)
    cout<<ind+1<<"\n";
    else
    cout<<"Tie\n";

}


