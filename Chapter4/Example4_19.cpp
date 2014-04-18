#include <iostream>

using namespace std;

int main()
{
	if (gender == 'M')
		if (age < 21 )
			policyRate = 0.05;
		else
			policyRate = 0.035;
	else if (gender == 'F')
		if (age < 21 )
			policyRate = 0.04;
		else
			policyRate = 0.03;
}
