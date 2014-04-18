#include <iostream>

enum grades {'A', 'B', 'C', 'D', 'F'}; //illegal enumeration type
enum places {1ST, 2ND, 3RD, 4TH}; //illegal enumeration type

enum grades {A, B, C, D, F};
enum places {FIRST, SECOND, THIRD, FOURTH};

int main()
{

	return 0;
}
