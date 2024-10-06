#include <iostream>
using namespace std;

class BaseClass
{
	private:
		int no1;
		int no2;
	public:
		BaseClass();
		BaseClass(int, int);
		void display();
};

BaseClass::BaseClass()
{
	no1 = no2 = 0;
	cout << "BaseClass Plain Constructor!!!" << endl;
}
BaseClass::BaseClass(int n1, int n2)
{
	no1 = n1;
	no2 = n2;
	cout << "BaseClass Parameterized Constructor!!!" << endl;
}
void BaseClass::display()
{
	cout << "No1: " << no1 << endl;
	cout << "No2: " << no2 << endl;
}

class DerivedClass : public BaseClass
{
	private:
		int no3;
		int no4;
	public:
		DerivedClass();
		DerivedClass(int, int, int, int);
		void display();
};

DerivedClass::DerivedClass()
{
	no3 = no4 = 0;
	cout << "DerivedClass Plain Constructor!!!" << endl;
}
DerivedClass::DerivedClass(int n1, int n2, int n3, int n4) : BaseClass(n1, n2)
{
	//With the help of member initilizer syntax it will call
	//parameterized constructor of base class
	//otherwize it will call plain constructor of base class.
	no3 = n3;
	no4 = n4;
	cout << "DerivedClass Parameterized Constructor!!!" << endl;
}
void DerivedClass::display()
{
	BaseClass::display();
	cout << "No3: " << no3 << endl;
	cout << "No4: " << no4 << endl;
}

int main()
{
	DerivedClass d1;
	d1.display();
	
	DerivedClass d2(1, 2, 3, 4);
	d2.display();	
	
	return 0;
}




