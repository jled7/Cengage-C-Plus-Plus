//Example string operations

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstName = "Elizabeth";
	string name = firstName + " Jones";
	string str1 = "It is sunny.";
	string str2 = "";
	string str3 = "computer science";
	string str4 = "C++ programming.";
	string str5 = firstName + " is taking " + str4;

	string::size_type len;

	cout << "str3: " << str3 << endl; 
	str3.clear(); 
	cout << "After clear, str3: " << str3 
		 << endl; 

	cout << "str1.empty(): " << str1.empty()
		 <<	endl;
	cout << "str2.empty(): " << str2.empty()
 		 << endl;
 		 
	cout << "str4: " << str4 << endl;
	str4.erase(11, 4);
	cout << "After erase(11, 4), str4: "
		 << str4 << endl;

	cout << "Length of \"" << firstName << "\" = "
		 << static_cast<unsigned int> (firstName.length())
		 << endl;

	cout << "Length of \"" << name << "\" = "
		 << static_cast<unsigned int> (name.length())
		 << endl;	

	cout << "Length of \"" << str1 << "\" = "
		 << static_cast<unsigned int> (str1.length())
		 << endl;

	cout << "Size of \"" << str5 << "\" = "
		 << static_cast<unsigned int> (str5.size())
		 << endl;

	len = name.length(); 
	cout << "len = " 
		 << static_cast<unsigned int> (len) << endl; 

	return 0;
}
