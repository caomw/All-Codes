#include<bits/stdc++.h>
using namespace std;

struct maxHeap
{
	int *arr;
	int size;
};

void swap(int *a,int *b){int t=*a;*a=*b;*b=t;}

void maxHeapify(maxHeap *heap,int idx)
{
	int left = 2*idx+1;
	int right = 2*idx+2;
	int largest = idx;

	if(left<heap->size and heap->arr[left]>heap->arr[idx])
		largest = left;

	if(right<heap->size and heap->arr[right]>heap->arr[largest])
		largest = right;

	if(largest!=idx)
	{
		swap(&heap->arr[largest],&heap->arr[idx]);
		maxHeapify(heap,largest);
	}
}


maxHeap *createHeap(int arr[],int size)
{
	maxHeap *heap = new maxHeap;
	heap->size = size;
	heap->arr = arr;
	
	for(int i=(size-2)/2;i>=0;i--)
		maxHeapify(heap,i);

	return heap;
}

void heapSort(int arr[],int size)
{
	maxHeap *heap = createHeap(arr,size);

	while(heap->size>1)
	{
		swap(&heap->arr[0],&heap->arr[heap->size-1]);
		--heap->size;
		maxHeapify(heap,0);
	}
	
}

void printArray(int* arr, int size)
{
    int i;
    for (i = 0; i < size; ++i)
        printf("%d ", arr[i]);
}
 
/* Driver program to test above functions */
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
 
    printf("Given array is \n");
    printArray(arr, size);
 
    heapSort(arr, size);
 
    printf("\nSorted array is \n");
    printArray(arr, size);
    return 0;
}