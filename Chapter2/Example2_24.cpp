// This program illustrates how output statements work.

#include <iostream>

using namespace std;

int main()
{
	cout << "Count...\n....1\n.....2\n......3" << endl; 

	cout << "Count..." << endl << "....1" << endl
	     << ".....2" << endl << "......3";

	return 0;
}
