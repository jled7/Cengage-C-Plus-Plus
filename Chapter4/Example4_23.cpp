//Program: Effect of break statements in a switch structure

#include <iostream>

using namespace std;

int main()
{
	switch (score / 10)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		grade = 'F';
		break;
	case 6:
		grade = 'D':
		break;
	case 7:
		grade = 'C';
		break;
	case 8:
		grade = 'B';
		break;
	case 9:
	case 10:
		grade = 'A';
		break;
	default:
	cout <<	"Invalid test score." << endl;
	}
	return 0; 
}
