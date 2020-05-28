//In this problem we are given two sorted arrays and we have to merge them and then we have to find the median.
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr1[n],arr2[n],arr[2*n];
	for(int i = 0;i<n;i++) cin>>arr1[i];
	for(int i = 0;i<n;i++) cin>>arr2[i];
	merge(arr1,arr1+n,arr2,arr2+n,arr);
	int mid = n - 1;
	cout<<arr[mid]<<endl;
}