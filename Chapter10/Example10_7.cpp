//	dataTypeName
//		listType
//	domain
//		Every listType value is an array of, say, 1000 numbers
//	operations
//		Check to see whether the list is empty.
//		Check to see whether the list is full.
//		Search the list for a given item.
//		Delete an item from the list.
//		Insert an item in the list.
//		Sort the list.
//		Destroy the list.
//		Print the list.

class listType
{
public:
	bool isEmptyList() const;
	bool isFullList() const;
	int search(int searchItem) const;
	void insert(int newElement);
	void remove(int removeElement);
	void destroyList();
	void printList() const;
	listType(); //constructor
private:
	int list[1000];
	int length;
};
