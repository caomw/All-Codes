// Program for range minimum query using segment tree
#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <iostream>
using namespace std;

// A utility function to get minimum of two numbers
long long int minVal(long long int x, long long int y) { return (x <= y)? x: y; }
long long int maxVal(long long int x, long long int y) { return (x >= y)? x: y; }

// A utility function to get the middle index from corner indexes.
long long int getMid(long long int s, long long int e) {  return s + (e -s)/2;  }

/*  A recursive function to get the minimum value in a given range of array
    indexes. The following are parameters for this function.

    st    --> Pointer to segment tree
    index --> Index of current node in the segment tree. Initially 0 is
             passed as root is always at index 0
    ss & se  --> Starting and ending indexes of the segment represented by
                 current node, i.e., st[index]
    qs & qe  --> Starting and ending indexes of query range */
long long int RMQUtil1(long long int *st, long long int ss, long long int se, long long int qs, long long int qe, long long int index)
{
    // If segment of this node is a part of given range, then return the
    // min of the segment
    if (qs <= ss && qe >= se)
        return st[index];

    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return 100000000000;

    // If a part of this segment overlaps with the given range
    long long int mid = getMid(ss, se);
    return minVal(RMQUtil1(st, ss, mid, qs, qe, 2*index+1),
                  RMQUtil1(st, mid+1, se, qs, qe, 2*index+2));
}long long int RMQUtil2(long long int *st, long long int ss, long long int se, long long int qs, long long int qe, long long int index)
{
    // If segment of this node is a part of given range, then return the
    // min of the segment
    if (qs <= ss && qe >= se)
        return st[index];

    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return -100000000000;

    // If a part of this segment overlaps with the given range
    long long int mid = getMid(ss, se);
    return maxVal(RMQUtil2(st, ss, mid, qs, qe, 2*index+1),
                  RMQUtil2(st, mid+1, se, qs, qe, 2*index+2));
}

// Return minimum of elements in range from index qs (quey start) to
// qe (query end).  It mainly uses RMQUtil()
long long int RMQ1(long long int *st, long long int n, long long int qs, long long int qe)
{
    // Check for erroneous input values
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }

    return RMQUtil1(st, 0, n-1, qs, qe, 0);
}

long long int RMQ2(long long int *st, long long int n, long long int qs, long long int qe)
{
    // Check for erroneous input values
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }

    return RMQUtil2(st, 0, n-1, qs, qe, 0);
}

// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
long long int constructSTUtil1(long long int arr[], long long int ss, long long int se, long long int *st, long long int si)
{
    // If there is one element in array, store it in current node of
    // segment tree and return
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }

    // If there are more than one elements, then recur for left and
    // right subtrees and store the minimum of two values in this node
    long long int mid = getMid(ss, se);
    st[si] =  minVal(constructSTUtil1(arr, ss, mid, st, si*2+1),
                     constructSTUtil1(arr, mid+1, se, st, si*2+2));
    return st[si];
}

/* Function to construct segment tree from given array. This function
   allocates memory for segment tree and calls constructSTUtil() to
   fill the allocated memory */
long long int *constructST1(long long int arr[], long long int n)
{
    // Allocate memory for segment tree
    long long int x = (long long int)(ceil(log2(n))); //Height of segment tree
    long long int max_size = 2*(long long int)pow(2, x) - 1; //Maximum size of segment tree
    long long int *st = new long long int[max_size];

    // Fill the allocated memory st
    constructSTUtil1(arr, 0, n-1, st, 0);

    // Return the constructed segment tree
    return st;


}

long long int constructSTUtil2(long long int arr[], long long int ss, long long int se, long long int *st, long long int si)
{
    // If there is one element in array, store it in current node of
    // segment tree and return
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }

    // If there are more than one elements, then recur for left and
    // right subtrees and store the minimum of two values in this node
    long long int mid = getMid(ss, se);
    st[si] =  maxVal(constructSTUtil2(arr, ss, mid, st, si*2+1),
                     constructSTUtil2(arr, mid+1, se, st, si*2+2));
    return st[si];
}

/* Function to construct segment tree from given array. This function
   allocates memory for segment tree and calls constructSTUtil() to
   fill the allocated memory */
long long int *constructST2(long long int arr[], long long int n)
{
    // Allocate memory for segment tree
    long long int x = (long long int)(ceil(log2(n))); //Height of segment tree
    long long int max_size = 2*(long long int)pow(2, x) - 1; //Maximum size of segment tree
    long long int *st = new long long int[max_size];

    // Fill the allocated memory st
    constructSTUtil2(arr, 0, n-1, st, 0);

    // Return the constructed segment tree
    return st;
}

// Driver program to test above functions
int main()
{
	std::ios::sync_with_stdio(false);
    long long int arr[100005] ;
    long long int n,q;
    cin>>n>>q;

    for(long long int i=0;i<n;i++)
    cin>>arr[i];

    // Build segment tree from given array

    while(q--)
    {
    long long int *st = constructST1(arr, n);

    long long int qs;  // Starting index of query range
    long long int qe;  // Ending index of query range
 	cin>>qs>>qe;
    // Print minimum value in arr[qs..qe]
    long long int mini=RMQ1(st, n, qs, qe);

    st = constructST2(arr, n);
    long long int maxi=RMQ2(st, n, qs, qe);
    cout<<maxi-mini<<"\n";
    }
    return 0;
}
