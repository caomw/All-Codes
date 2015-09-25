#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct Node
{
	int data;
	Node *next;
};

Node *newNode(int data)
{
	Node* node= new Node;
	node->data = data;
	node->next = NULL;

	return node;
}

main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("/home/mark/Desktop/input.txt", "r", stdin);
        //freopen("C:\\Users\\Mohit\\Desktop\\output.txt","w",stdout);
    #endif

    while(1)
    {
    	ll n,d;
    	cin>>n>>d;

    	if(!n&&!d)
    		break;

    	Node *root = newNode(1);
    	Node *cur=root;

    	for(ll i=2;i<=n;i++)
    	{
    		Node *node = newNode(i);
    		cur->next = node;
    		cur = node;

    		if(!i)
    		i=n;
    		
    		cur->data=(i);
    	}
    	cur->next=root;
    	cur=root;

    	ll counti=1;
    	Node *pNode;

    	while(cur->next!=cur)
    	{

    		if(counti==d)
    		{
    			pNode->next=cur->next;
    			counti=0;
    			//cout<<cur->data<<" rem\n";
    		}
    		//cout<<cur->data<<" data\n";
    		pNode=cur;
    		cur=cur->next;

    		counti++;
    	}

    	cout<<n<<" "<<d<<" "<<cur->data<<"\n";
    }
}
1 2 3
1 x 3
x x1 3

2
1

2
4

1 2 3 4
1 2 x 4
1 x x1 4
1 x1 x1 x

3
2
4

3
6
8

1 2 3 4 5
1 2 x 4 5
x 2 x1 4 5
x1 2 x1 4 x
x1 x x1 4 x1
x1 x1 x1 4 x1

3
6
10
12

3
1
5
2

1 2 3 4 5 6 7
1 2 3 x 5 6 7
x 2 3 x1 5 6 7
x1 2 3 x1 5 x 7
x1 2 3 x1 x x1 7
x1 2 3 x1 x1 x1 x
x1 2 x x1 x1 x1 x1

4
8
13
19
28
30

4
1
6
5
7
3
