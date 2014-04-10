#include <iostream>

using namespace std;

int main()
{
	int	sum = 0,average,newNum;
	for (int i = 1; i <= 5; i++)
	{
		cin >> newNum;
		sum = sum + newNum;
	}
	average = sum / 5;
	cout << "The sum is " << sum << endl;
	cout << "The average is " << average << endl;

}
