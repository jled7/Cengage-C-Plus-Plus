class inventory
{
public:
	inventory();
	inventory(string);
	inventory(string, int, double);
	inventory(string, int, double, int);
	
	//Add additional functions
	
private:
	string name;
	int itemNum;
	double price;
	int unitsInStock;
};

inventory::inventory() //default constructor
{
	name = "";
	itemNum = -1M
	price = 0.0;
	unitsInStock = 0;
}

inventory::inventory(string n)
{
	name = n;
	itemNum = -1;
	price = 0.0;
	unitsInStock = 0;
}

inventory::inventory(string n, int iNum, double cost)
{
	name = n;
	itemNum = iNum;
	price = cost;
	unitsInStock = 0;
}

inventory::inventory(string n, int iNum, double cost, int inStock)
{
	name = n;
	itemNum = iNum;
	price = cost;
	unitsInStock = inStock;
}
