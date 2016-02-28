#include <bits/stdc++.h>
using namespace std;

	bool func(int i,int j)
	return (i<j);

main()
{

	int arr[] = {1,2,3,4};
	sort(arr,arr+sizeof(arr)/sizeof(int),func);
	for(int i=0;i<4;i++)
		cout<<arr[i]<<" ";
}