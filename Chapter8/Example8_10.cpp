#include <iostream>
#include <cstring>

using namespace std;

char studentName[21];
char myname[16];
char yourname[16];

int main()
{
	strcpy(myname, "John Robinson");
	cout << myname;
	
	strlen("John Robinson"); // Returns 13, the length of 
							 // the string "John Robinson"
							 
	int len; 				 // Stores 9 into len
	len = strlen("Sunny Day"); 
	
	strcpy(yourname, "Lisa Miller"); // yourname = "Lisa Miller"
	strcpy(studentName, yourname); 	 // studentName = "Lisa Miller"

	strcmp("Bill", "Lisa"); 	// Returns a value < 0

	strcpy(yourname, "Kathy Brown"); //yourname = "Kathy Brown"

	strcpy(myname, "Mark G. Clark"); //myname = "Mark G. Clark"

	strcmp(myname, yourname); // Returns a value > 0

	return 0;
}
