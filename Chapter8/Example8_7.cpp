//Arrays as parameters to functions

#include <iostream>

using namespace std;

const int ARRAY_SIZE = 10;

void initializeArray(int x[],int sizeX);
void fillArray(int x[],int sizeX);
void printArray(const int x[],int sizeX);
int sumArray(const int x[],int sizeX);
int indexLargestElement(const int x[],int sizeX);
void copyArray(int list1[], int src, int list2[],
				int tar, int numOfElements);
int main()
{
	int listA[ARRAY_SIZE] = {0};	//Declare the array listA
									//of 10 components and
									//initialize each component
									//to 0.
	int listB[ARRAY_SIZE];			//Declare the array listB
									//of 10 components.
	
	cout << "listA elements: ";
	
		//Output the elements of listA using
		//the function printArray
	printArray(listA, ARRAY_SIZE); 
	cout << endl; 
		//Initialize listB using the function
		//initializeArray
	initializeArray(listB, ARRAY_SIZE); 
	
	cout << "listB elements: ";
	
		//Output the elements of listB
	printArray(listB, ARRAY_SIZE);
	cout << endl << endl; 

	cout << "Enter " << ARRAY_SIZE
		 << " integers: "; 
		 
		//Input data into listA using the
		//function fillArray
	fillArray(listA, ARRAY_SIZE); 
	cout << endl; 

	cout << "After filling listA, " //Line 11
		 << "the elements are:" << endl; 
		 
		//Output the elements of listA //Line 12
	printArray(listA, ARRAY_SIZE); //Line 13
	cout << endl << endl; 
	
		//Find and output the sum of the elements
		//of listA 
	cout << "The sum of the elements of " 
		 << "listA is: " 
		 << sumArray(listA, ARRAY_SIZE) << endl 
		 << endl; 

		//Find and output the position of the largest
		//element in listA
	cout << "The position of the largest "
		 << "element in listA is: "
		 << indexLargestElement(listA, ARRAY_SIZE)
		 << endl;

		//Find and output the largest element
		//in listA
	cout << "The largest element in "
		 << "listA is: "
		 << listA[indexLargestElement(listA, ARRAY_SIZE)]
		 << endl << endl;

		//Copy the elements of listA into listB using the
		//function copyArray
	copyArray(listA, 0, listB, 0, ARRAY_SIZE);
	
	cout << "After copying the elements "
		 << "of listA into listB," << endl 
		 << " listB elements are: "; 
		 
		//Output the elements of listB
	printArray(listB, ARRAY_SIZE);
	cout << endl; 
	return 0;
}






