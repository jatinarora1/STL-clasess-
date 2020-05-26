#include<iostream>
#include<algorithm>
using namespace std;
//Compare function.
bool compare(string a,string b)
{
	if(a.length() == b.length())
		return a<b;
	else
		return a.length()<b.length();
}
int main()
{
	int n;
	cin>>n;
	string s[100];//let's have array of strings.
	cin.get();
	for(int i = 0;i<n;i++)
	{
		getline(cin,s[i]);
	}
	sort(s,s+n);//here we are sorting in lexographical order.
	cout<<endl<<"Output in lexographical order"<<endl;
	for(int i = 0;i<n;i++) cout<<s[i]<<endl;
	//let's sort on the basis of the length of the strings for that we have to write our own compare function.

	sort(s,s+n,compare);
	cout<<endl<<"Output after using our costumize compare function"<<endl;
	for(int i = 0;i<n;i++) cout<<s[i]<<endl;
	return 0;
}