#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[] = {1,2,3,4,5,5,5,6,7,8};
	int n = sizeof(arr)/sizeof(int);

	//binary_search - returns boolean
	bool present = binary_search(arr,arr+n,5);
	if(present) cout<<"true"<<endl;
	else cout<<"false"<<endl;

	//lower_bound Index
	auto lower_bound_address = lower_bound(arr,arr+n,5);
	int lower_bound_index = lower_bound_address-arr;
	cout<<lower_bound_index<<endl;

	//upper_bound_index
	auto upper_bound_address = upper_bound(arr,arr+n,5);
	int upper_bound_index = upper_bound_address-arr;
	cout<<upper_bound_index<<endl;

	//frequency of the key = upper_index-lower_index
	int frequency = upper_bound_index-lower_bound_index;
	cout<<frequency<<endl;
	return 0;
}