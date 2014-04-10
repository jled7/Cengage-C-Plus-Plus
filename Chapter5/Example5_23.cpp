#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	int counter = 0,sum,num;
	while (counter < 4)
	{
		sum = 0;

		ifstream infile("Exp_5_23.txt");
		infile >> num;
		while (num != -999)
		{
			sum = sum + num;
			infile >> num;
		}
		cout << "Line " << counter + 1
			 << ": Sum = " << sum << endl;
		counter++;
	}
}
