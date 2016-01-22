#include <stdio.h>
#include <stdlib.h>

int pos[8005];
struct node
{
  int data;
  struct node* left;
  struct node* right;
};

int search(int arr[], int strt, int end, int value);
struct node* newNode(int data);

struct node* buildTree(int in[], int pre[], int inStrt, int inEnd)
{
  static int preIndex = 0;

  if(inStrt > inEnd)
     return NULL;

  /* Pick current node from Preorder traversal using preIndex
    and increment preIndex */
  struct node *tNode = newNode(pre[preIndex++]);

  /* If this node has no children then return */
  if(inStrt == inEnd)
    return tNode;

  /* Else find the index of this node in Inorder traversal */
  int inIndex = search(in, inStrt, inEnd, tNode->data);

  /* Using index in Inorder traversal, construct left and
     right subtress */
  tNode->left = buildTree(in, pre, inStrt, inIndex-1);
  tNode->right = buildTree(in, pre, inIndex+1, inEnd);

  return tNode;
}

/* UTILITY FUNCTIONS */
/* Function to find index of value in arr[start...end]
   The function assumes that value is present in in[] */
int search(int arr[], int strt, int end, int value)
{
  int i;
  for(i = strt; i <= end; i++)
  {
    if(arr[i] == value)
      return i;
  }
}

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return(node);
}

int flag=1,k=0;/* This funtcion is here just to test buildTree() */
void printInorder(struct node* node)
{
  if (node == NULL)
     return;

  /* first recur on left child */
  printInorder(node->left);

  /* now recur on right child */
  printInorder(node->right);
  /* then print the data of node */
  
  if (pos[k++]!=node->data)
  	flag=0;
}

/* Driver program to test above functions */
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	scanf("%d",&n);

	int pre[n+1],in[n+1];

	for (int i=0;i<n;i++)
		scanf("%d",&pre[i]);
	for (int i=0;i<n;i++)
		scanf("%d",&pos[i]);
	for (int i=0;i<n;i++)
		scanf("%d",&in[i]);

  struct node *root = buildTree(in, pre, 0, n - 1);

  /* Let us test the built tree by printing Insorder traversal */
  printInorder(root);
  if (flag)
	  printf("yes");
	else
		printf("no");
  
}
