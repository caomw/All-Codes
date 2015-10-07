#include<bits/stdc++.h>
#include<math.h>
typedef int ll;
using namespace std;
 
 inline uint max(uint x, uint y) {
    return (x > y)?x:y;
}
ll nde1[100000000][2];
ll nde2[100000000][2];
/*
struct Node
{
    Node *left;
    Node *right;
};
 
Node *newNode() {
    Node *node = new Node;
 
    node->left = NULL;
    node->right = NULL;
    return node;
}
 
Node *root1 = newNode();
Node *root2 = newNode();
 */
inline void buildTree(ll num,ll ind) {
 
    //std::bitset <30> bin(num);
    int trav[100000000][2];
 
    if(!ind)
        trav = nde1;
    else if(ind)
        trav = nde2;
 
    for(ll i=29 ;i>=0 ; i--) {
 
       //int bit = bin[i];
       if(!(num&1<<i)) {
        if(trav->left==NULL)
            trav->left=newNode();
            trav=trav->left;
        }
        else if(num&1<<i) {
 
        if(trav->right==NULL)
            trav->right=newNode();
            trav=trav->right;
        }
    }
}
 
inline ll maxXorInd(ll num,ll arr[],ll n,ll ind)
{
    //std::bitset<30> binNum(num);
    char binSec; 
 
    Node **trav;
 
    if(!ind)
        trav = root1;
    else if(ind)
        trav = root2;
 
    register ll sum=0,two=pow(2,29);
    for(ll i=29;i>=0;i--) {
        //bool bit = binNum[i];
 
        if(num&1<<i) {
           if(trav->left!=NULL)
                binSec='0',trav=trav->left;
            else if(trav->right!=NULL)
                binSec='1',trav=trav->right;
        }
        else {
            if(trav->right!=NULL)
                binSec='1',trav=trav->right;
            else if(trav->left!=NULL)
                binSec='0',trav=trav->left;
        }
 
        bool bit1 = binSec-'0';
 
        if(bit1)
        sum+=two;
        two/=2;
 
    }
 
    return sum;
}
 
main()
{
    memset(nde1,0,sizeof(nde1));
    memset(nde2,0,sizeof(nde2));

    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    #endif
    register ll n;
    cin>>n;
 
    register ll arr[n+5],rxor[n+5],revxor[n+5];
    register ll left[n+5];
 
    cin>>arr[0];
    rxor[0] = arr[0];
 
    buildTree(0,0);
    buildTree(rxor[0],0);
    
    left[0] = rxor[0]^maxXorInd(rxor[0],rxor,n,0);
    for(register ll i=1;i<n;i++)
    {
        cin>>arr[i];
        rxor[i] = arr[i] xor rxor[i-1];
        buildTree(rxor[i],0);
 
        left[i] = max(left[i-1],rxor[i]^maxXorInd(rxor[i],rxor,n,0));
        
    }
    
    revxor[n-1] = arr[n-1];
    
    buildTree(revxor[n-1],1);
    buildTree(0,1);
    
    ll pr,r;
 
    pr = revxor[n-1]^maxXorInd(revxor[n-1],revxor,n,1);
 
    register ll maxi=0;
    for(register ll i=n-2;i>=0;i--)
    {
        revxor[i] = arr[i] xor revxor[i+1];
        buildTree(revxor[i],1);
 
        r = max(arr[i],max(pr,revxor[i]^maxXorInd(revxor[i],revxor,n,1)));
        
        maxi=max(maxi,pr+left[i]);
 
        pr=r;        
    }
    
    cout<<maxi;
    return 0;
}    