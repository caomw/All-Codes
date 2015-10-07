#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void makeTree(ll tree[],ll ind,ll st,ll se,ll arr[])
{
    if(st>se)
    return;

    if(st==se)
    {
        tree[ind]=arr[st];
        //cout<<st<<" "<<se<<" "<<tree[ind]<<"\n";
        return;
    }

    ll mid= st+(se-st)/2;
    makeTree(tree,2*ind+1,st,mid,arr);
    makeTree(tree,2*ind+2,1+mid,se,arr);
    tree[ind]=max(tree[2*ind+1],tree[2*ind+2]);
    //cout<<st<<" "<<se<<" "<<tree[ind]<<"\n";
    return;
}



ll maxim=0;
void fmax(ll tree[],ll ind,ll st,ll se,ll k)
{
    if(st>se)
    return;

    if(abs(se-st)==k)
    {
        cout<<tree[ind]<<" ";
        return;
    }
    if(st==se)
    return;

    ll mid= st+(se-st)/2;
    fmax(tree,2*ind+1,st,mid,k);
    fmax(tree,2*ind+2,1+mid,se,k);
    //cout<<tree[ind]<<" ";
    return;
}



int main()
{
    std::ios::sync_with_stdio(0);
    ll n;
    cin>>n;

    ll arr[n+5],tree[100005];
    for(ll i=0;i<n;i++)
    cin>>arr[i];

    makeTree(tree,0,0,n-1,arr);

    ll dif;
    cin>>dif;

    fmax(tree,0,0,n-1,dif);


    /*
    for(ll i=0;i<3*n;i++)
    cout<<tree[i]<<" ";
    */

}

