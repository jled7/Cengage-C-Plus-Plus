#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Use this as the input:\n25 67 89 43 72\n12 78 34"
	     << endl;
	
	cin >> a;
	cin.ignore(100, '\n');
	cin >> b;
	cout << "cin.ignore(intExp, chExp); skip intExp characters or till"
	     << " the chExp charactr is found" << endl;
	cout << "a: " << a << "\nb: " << b << endl;

	return 0;
}
