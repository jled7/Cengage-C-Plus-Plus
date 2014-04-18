#include <iostream>

using namespace std;

typedef int integer;
typedef double real;
typedef double decimal;

int main()
{
	integer a, b;
	real 	c;
	decimal d;
	
	a = 10;
	b = 20;
	c = 3.1415;
	d = 40.15;
	
	cout << "Integer : " << a << endl;
	cout << "Integer : " << b << endl;
	cout << "Real \t: " << c << endl;
	cout << "Decimal : " << d << endl;
	
	return 0;
}
