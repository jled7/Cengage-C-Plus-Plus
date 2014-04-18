//Example: insert and replace functions
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string firstString = "Cloudy and warm.";
	string secondString = "Hello there";
	string thirdString = "Henry is taking programming I.";
	string str1 = " very ";
	string str2 = "Lisa";
	
	cout << "firstString = " << firstString
		 << endl;
	firstString.insert(10, str1);
	cout << "After insert; firstString = "
		 << firstString << endl;
		 
	cout << "secondString = " << secondString
		 << endl;
	secondString.insert(11, 5, '!');
	cout << "After insert; secondString = "
		 << secondString << endl;
		 
	cout << "thirdString = " << thirdString
		 << endl;
	thirdString.replace(0, 5, str2);
	cout << "After replace, thirdString = "
		 << thirdString << endl;
		 
	return 0;
}

