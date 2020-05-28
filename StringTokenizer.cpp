#include<iostream>
#include<cstring>

using namespace std;
int main()
{
	char s[100] = "Knock Knock, Knock knock, knock knock";

	char* ptr = strtok(s,", ");
	// cout<<ptr<<endl;
	while(ptr!=NULL)
	{
		cout<<ptr<<endl;
		ptr = strtok(NULL,", ");// here we are passing NULL instead of the pointer to sstring because strtok() maintains the state of the string internally and if doesn't get any string pointer a input it just shifts to next element in the string after the delimiter.
		
	}
	return 0;
}