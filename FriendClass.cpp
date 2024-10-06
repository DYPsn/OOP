#include<iostream>
using namespace std;

class One
{
	private:
		int no1;
		int no2;
	public:
		One(int, int);
		void show();
		friend class Two;
};

One::One(int n1, int n2)
{
	no1 = n1;
	no2 = n2;
}

void One::show()
{
	cout << "No1: " << no1 << endl;
	cout << "No2: " << no2 << endl;
}

class Two
{
	private:
	public:
		void displayOne(One);
};

void Two::displayOne(One o)
{
	cout << "No1: " << o.no1 << endl;
	cout << "No2: " << o.no2 << endl;
}

int main()
{
	One o1(4, 5);
	Two t1;
	t1.displayOne(o1);
	
	return 0;
}
