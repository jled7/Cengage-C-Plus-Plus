//Example: find function
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence = "Outside it is cloudy and warm.";
	string str = "cloudy";
	
	string::size_type position;
	
	cout << "sentence = \"" << sentence
		 << "\"" << endl; 
		 
	cout << "The position of \"is\" in sentence = "
		 << static_cast<unsigned int> (sentence.find("is"))
		 << endl;

	cout << "The position of 's' in sentence = "
	 	 << static_cast<unsigned int> (sentence.find('s'))
		 << endl;
	
	cout << "The position of \"" << str
		 << "\" in sentence = "
		 << static_cast<unsigned int> (sentence.find(str))
		 << endl;

	cout << "The position of \"the\" in sentence = "
		 << static_cast<unsigned int> (sentence.find("the"))
		 << endl;

	cout << "The first occurrence of \'i\' in "
		 << "sentence \n after position 6 = "
		 << static_cast<unsigned int> (sentence.find('i', 6))
		 << endl;

	position = sentence.find("warm"); 
	cout << "" << "Position = " 
		 << position << endl; 
	
	return 0;
}
