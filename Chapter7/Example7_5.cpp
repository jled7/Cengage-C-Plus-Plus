#include <iostream>

enum courses {ALGEBRA, BASIC, PASCAL, CPP, PHILOSOPHY, ANALYSIS,
CHEMISTRY, HISTORY};
courses registered;

int main()
{
	char ch1, ch2;
	cin >> ch1 >> ch2; //Read two characters

	switch (ch1)
	{
		case 'a':
		case 'A':
			if (ch2 == 'l' || ch2 == 'L')
				registered = ALGEBRA;
			else
				registered = ANALYSIS;
			break;
		case 'b':
		case 'B':
			registered = BASIC;
			break;
		case 'c':
		case 'C':
			if (ch2 == 'h' || ch2 == 'H')
				registered = CHEMISTRY;
			else
				registered = CPP;
			break;
		case 'h':
		case 'H':
			registered = HISTORY;
			break;
		case 'p':
		case 'P':
			if (ch2 == 'a' || ch2 == 'A')
				registered = PASCAL;
			else
				registered = PHILOSOPHY;
			break;
		default:
			cout << "Illegal input." << endl;
	}

	return 0;
}
