#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	int counter = 0,sum,num;
	counter = 0;
	ifstream infile("Exp_5_24.txt");
	infile >> num;
	while (infile)
	{
		sum = 0;
		while (num != -999)
		{
			sum = sum + num;
			infile >> num;
		}
		cout << "Line " << counter + 1
		     << ": Sum = " << sum << endl;
		counter++;
		infile >> num;
	}
}
