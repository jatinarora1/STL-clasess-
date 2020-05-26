#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s0;
	string s1("Hello");
	string s2(s1);
	string s3 = "Hello world";
	char a[] = {'a','b','c','\0'};
	string s4 = a;
	cout<<s0<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;

	//Append

	string s5 = "hello";
	s5.append(" world!!");
	cout<<s5<<endl;
	string s6 = "New";
	s6+=" one";
	cout<<s6<<endl;

	//Remove

	string s7 = "Happy New Year";
	cout<<"length before removal of string: "<<s7.length()<<endl;
	s7.clear();
	cout<<"length after removal of string: "<<s7.length()<<endl;

	//compare returns integer value basically sum of difference of ASCII values of char.

	string s8 = "What's up";
	string s9 = "Nothing Much";
	int difference = s8.compare(s9);
	cout<<"differnce between string s8 and string s9: "<<difference<<endl;
	// >,< symbols are overloaded for strings compare strings lexographically.
	if(s8>s9) cout<<"What's up is greater than Nothing Much"<<endl;
	else cout<<"Nothing Much is greater than What's up"<<endl;

	// we can also access ith character of a string.

	string s10;
	s10 = "New Zealand";
	cout<<"5th character in the string s10: "<<s10[5]<<endl;

	// find the index of substring
	string s11;
	s11 = "Long isalnd iced tea";
	int index = s11.find("iced");
	cout<<"index = "<<index<<endl;

	//remove substring - erase() which takes start index of substring and end index of substring.
	string s12;
	s12 = "New Jersey";
	string word = "New";
	s12.erase(s12.find("New"),s12.find("New")+word.size());
	cout<<"Updated String << "<<s12<<endl; 

	//Iterate over all the characters in the string
	string s13;
	s13 = "Bullshit";
	cout<<"Iterating the characters in the string: ";
	//loop1
	for(int i = 0;i<s13.size();i++)cout<<s13[i]<<" ";
	cout<<endl;
	
	//Iterating the characters in the string using ann iterator.
	string s14;
	s14 = "Sheldon Cooper";
	cout<<"iterating the characters in the string using iterators: ";
	//loop2
	for(auto it = s14.begin();it!=s14.end();it++)
	{
		cout<<(*it)<<" ";// here "it" is the pointer so to extract the value at the address in the bucket pointed by "it" we use (*it).
	}
	cout<<endl;
	// we can also use forEach loop to iterate over the characters.
	string s15;
	s15 = "Leanord";
	cout<<"Iterating the characters in the string using forEach loop: ";
	//loop3
	for(auto i:s15)
	{
		cout<<i<<" ";//here "i" is working as a holder which is initially holding "s15[0]: L" then on the second time it will be holding the char at next index and so on till the string ends.
	}
	cout<<endl;
	//Iterators: Iterators are defined within the class like class string{ class iterator{};}; so we can define iterator like string::iterator it; and this is the exact datatype for the "it"(P.S. here it is the pointer to the address of the value stored in the bucket). 
	//So in loop2 auto can be replaced by string::iterator it and in loop 3 auto can be replaced by i.
	return 0;

}