#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[] = {1,2,3,4,10};
	int n = sizeof(arr)/sizeof(int);
	auto it = find(arr,arr+n,10);
	int index = (it)-arr;
	cout<<index<<endl;
	return 0;
}