//Program to determine the sum of the first n positive integers.

#include <iostream>

using namespace std;

int main()
{
	int counter;	//loop control variable
	int sum;		//variable to store the sum of numbers
	int n;			//variable to store the number of
					//first positive integers to be added

	cout << "Enter the number of positive "
		 << "integers to be added: ";
	cin >> n;
	sum = 0;
	cout << endl;

	for (counter = 1; counter <= n; counter++) 
		sum = sum + counter; 

	cout << "The sum of the first " << n 
		 << " positive integers is " << sum 
		 << endl; 

	return 0;
}
