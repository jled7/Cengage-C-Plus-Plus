//Example: substr function

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence;
	string str;

	sentence = "It is cloudy and warm.";

	cout << "substr(0, 5) in \""
		 << sentence << "\" = \"" 
		 << sentence.substr(0, 5) << "\"" << endl; 
		 
	cout << "substr(6, 6) in \"" 
		 << sentence << "\" = \"" 
		 << sentence.substr(6, 6) << "\"" << endl; 
		 
	cout << "substr(6, 16) in \""
		 << sentence << "\" = " << endl
		 << "\"" << sentence.substr(6, 16)
		 << "\"" << endl;

	cout << "substr(17, 10) in \""
		 << sentence << "\" = \""
		 << sentence.substr(17, 10) << "\"" << endl;
		 
	cout << "substr(3, 6) in \""
		 << sentence << "\" = \""
		 << sentence.substr(3, 6) << "\"" << endl;

	str = sentence.substr(0, 8); //Line 9
	cout << "" << "str = \"" << str 
		 << "\"" << endl; 
	str = sentence.substr(2, 10); 
	cout << "" << "str = \"" << str 
		 << "\"" << endl; 

	return 0;
}


