#include <iostream>

using namespace std;

class clockType
{
public:
	void setTime(int, int, int);
	void getTime(int&, int&, int&) const;
	void printTime() const;
	void incrementSeconds();
	void incrementMinutes();
	void incrementHours();
	bool equalTime(const clockType&) const;
private:
	int hr;
	int min;
	int sec;
};

int main()
{
	clockType myClock;
	clockType yourClock;	

	myClock.setTime(5, 2, 30);
	myClock.printTime();
	yourClock.setTime(5, 2, 30);
	
	if(myClock.equalTime(yourClock)) 	// legal and true
		cout << "Is equal" << endl;
		
	return 0;
}
