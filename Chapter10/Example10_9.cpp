#include <cstdlib>
#include <ctime>

class die
{
public:
	die();
		//Default constructor
		//Sets the default number rolled by a die to 1
		
	int roll();
		//Function to roll a die
		//This function uses a random number generador to randomly
		//generate a number between 1 and 6, and stores the number
		//in the instance variable num and returns the number
		
	int getNum() const;
		//Function to return the number on the top face of the die
		//Returns the value of the instance variable num.
		
private:
	int num;
};

die::die()
{
	num = 1;
	srand(time(0));
}

int die::roll()
{
	num = rand() % 6 + 1;
	
	return num;
}

int die::getNum() const
{
	return num;
}

//THe user program that uses the class die

#include <iostream>

using namespace std;

int main()
{
	die die1;
	die die2;

	cout << "die1: " << die1.getNum() << endl;
	
	cout << "die2: " << die2.getNum() << endl;
	
	cout << "After rolling die1: "
		 << die1.roll() << endl;
	
	cout << "Ater rolling die2: "
		 << die2.roll() << endl;
	
	cout << "The sum of the numbers rolled"
		 << " by the dice is: "
		 << die1.getNum() + die2.getNum() << endl;	

	cout << "After again rolling, the sum of "
		 << "the numbers rolled is: "
		 << die1.roll() + die2.roll() << endl;	

	return 0;	
} //end main
