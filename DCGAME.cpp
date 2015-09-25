#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll counti,p=0;
char ansch[1000000005];

ll bst(ll n,ll st,ll se,ll arr[])
{
counti++;

    if(arr[st]==n)
        return st;

    if(arr[se]==n)
        return se;

    ll mid= st+ (se-st)/2;

    if(mid==st)
        return mid;

    if(n<=arr[mid])
        return bst(n,st,mid,arr);

    if(n>=arr[mid])
        return bst(n,1+mid,se,arr);
}


ll arr[1000005],sum[1000005];

int main()
{

std::ios::sync_with_stdio(0);

    ll n,q;
    cin>>n>>q;

    map<ll,ll> mapi,idx;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
    for(ll i=0;i<n;i++)
    {
        mapi[arr[i]]+=i+1;
    }

    map<ll,ll>::iterator it=mapi.begin();


    ll k=0;
    sum[0]=(*it).second;

    for(it;it!=mapi.end();it++)
    {
        arr[k++]=(*it).first;

        if(k>1)
        sum[k-1]=sum[k-2]+(*it).second;

/*
        cout<<arr[k-1]<<" "<<sum[k-1]
        <<" "<<(*it).second<<"\n";
*/
    }
    //cout<<"\n";


    while(q--)
    {
        char c,D;
        cin>>c;

        ll num;
        cin>>num;
        cin>>D;


        ll ind,ans;
//        pari[i].first=
        if(idx[num])
        ind=idx[num];

        else
        {
            ind=bst(num,0,k-1,arr);
            idx[num]=ind;
        }
       // cout<<ind<<"\n";

        if(c=='>')
        {
            if(arr[ind]>num)
            ind--;

            if(ind>k-1)
            ans=0;
            else
            ans=sum[k-1]-sum[ind];
            //ans-=ind*(ind+1)/2;
        }
        else if (c=='=')
        {
            if(arr[ind]>num)
            ind--;
            else if(arr[ind]<num)
            ind++;

            if(ind==0)
            ans=sum[ind];
            else
            ans=sum[ind]-sum[ind-1];

            if(arr[ind]!=num)
            ans=0;

        }
        else if(c=='<')
        {
            if(arr[ind]>=num)
            ind--;

            if(ind==-1)
            ans=0;
            else if(num>arr[k-1])
            ans=sum[k-1];
            else if(ind!=-1)
            ans=sum[ind];
        }
cout<<ans<<"\n";


        if(D=='D')
        ans++;

        if(ans&1)
        ansch[p++]='C';
        else
        ansch[p++]='D';

 //cout<<counti<<"\n";
 //counti=0;

    }
ansch[p++]='\0';
cout<<ansch;
}
