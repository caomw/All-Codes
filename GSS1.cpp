#include<iostream>
using namespace std;

ll tree[500000];

void makeTree(ll arr[],ll st,ll se,ll ind)
{
    if(st==se)
    {
        tree[ind]=arr[st];
        return tree[ind];
    }

    ll mid=(st+se)/2;
    tree[ind]=max(makeTree(arr,st,mid,2*ind+1),makeTree(arr,mid+1,se,2*ind+2));

    return tree[ind];
}

int main()
{
    ll n;
    cin>>n;

    ll arr[n+5];
    for(ll i=0;i<n;i++)
        cin>>arr[i];

    makeTree(arr,0,n-1,0);

    ll q;
    cin>>q;

    while(q--)
    {
        ll i,j;
        cin>>i>>j;
        i--;j--;

        findMax(i,j);
    }
}
