//Que. Sheldon is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.


#include<iostream>
#include<algorithm>
using namespace std;
bool compare(string a,string b)
{
	string temp;
	if(a.length()<=b.length() && a.compare(b.substr(0,a.size())) == 0){
		
		return a.length()>b.length();
	}
	else if(b.length()<=a.length() && b.compare(a.substr(0,b.size())) == 0)return a.length()>b.length();
	return a<b;
}
int main()
{
	int n;
	cin>>n;
	cin.get();
	string s[n];
	for(int i = 0;i<n;i++) getline(cin,s[i]);
	sort(s,s+n,compare);
	for(int i = 0;i<n;i++) cout<<s[i]<<endl;
	
	return 0;
}