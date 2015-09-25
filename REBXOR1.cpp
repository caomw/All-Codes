#include<bits/stdc++.h>
#include<math.h>
typedef int ll;
using namespace std;
 
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
 
inline void buildTree(ll num,ll ind) {
 
    //bitset <30> bin(num);
    Node *trav;
 
    if(!ind)
        trav = root1;
    else if(ind)
        trav = root2;

    ll div=536870912;
    for(ll i=29 ;i>=0 ; i--) {
 
       //int bit = bin[i];


        ll bit=num/div;
        bit%=2;
        div/=2;


       if(!bit) {
        if(trav->left==NULL)
            trav->left=newNode();
            trav=trav->left;
        }
        else if(bit) {
 
        if(trav->right==NULL)
            trav->right=newNode();
            trav=trav->right;
        }
    }
     
}
 
inline ll maxXorInd(ll num,ll arr[],ll n,ll ind)
{
    //bitset<30> binNum(num);
    char binSec; 
 
    Node *trav;
 
    if(!ind)
        trav = root1;
    else if(ind)
        trav = root2;
 
     ll sum=0,two=536870912,div=536870912;//pow(2,29);
    for(ll i=29;i>=0;i--) {

        ll bit=num/div;
        bit%=2;
        div/=2;

//        bool bit = binNum[i];
 
        if(bit) {
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
        sum+=(two*bit1);
        two/=2;
    }
 
    return sum;
}
void fastWrite(int n){char sum[20];int i=0;do{ sum[i++]=n%10+48;n=n/10;}while(n!=0);while(i>0){ putchar(sum[--i]);} putchar('\n');}
inline void get(int &x){register int c = getchar_unlocked();x = 0;int neg = 0;for(;((c<48 || c>57) && c != '-');c = getchar());if(c=='-') {neg=1;c=getchar();}for(;c>47 && c<58;c = getchar()) {x = 10*x + c - 48;}if(neg) x=-x;}
 
 
main()
{
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output1.txt","w",stdout);
    #endif
     ll n;
    scanf("%d",&n);
 
     ll arr[n+5],rxor[n+5],revxor[n+5];
     ll left[n+5],right[n+5];    
 
    
    scanf("%d",&arr[0]);
    rxor[0] = arr[0];
 
    buildTree(0,0);
    buildTree(rxor[0],0);
    
    left[0] = rxor[0]^maxXorInd(rxor[0],rxor,n,0);
    for( ll i=1;i<n;i++)
    {
        scanf("%d",&arr[i]);
        rxor[i] = arr[i] xor rxor[i-1];
        buildTree(rxor[i],0);
 
        left[i] = max(left[i-1],rxor[i]^maxXorInd(rxor[i],rxor,n,0));
        
    }
    
    revxor[n-1] = arr[n-1];
    
    buildTree(revxor[n-1],1);
    buildTree(0,1);
 
    
    right[n-1] = revxor[n-1]^maxXorInd(revxor[n-1],revxor,n,1);;
 
     ll maxi=0;
    for( ll i=n-2;i>=0;i--)
    {
        revxor[i] = arr[i] xor revxor[i+1];
        buildTree(revxor[i],1);
        right[i] = max(arr[i],max(right[i+1],revxor[i]^maxXorInd(revxor[i],revxor,n,1)));
        
        maxi=max(maxi,right[i+1]+left[i]);        
    }
 
    fastWrite(maxi);
    return 0;
    } 