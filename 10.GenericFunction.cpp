#include <iostream>
using namespace std;

template <typename T> void mySwap(T &n1, T &n2)
{
	T temp = n1;
	n1 = n2;
	n2 = temp;
}

int main()
{
	int no1 = 10, no2 = 20;
	
	mySwap(no1, no2);
	cout << "After Swaping" << endl;
	cout << "No1: " << no1 << endl;
	cout << "No2: " << no2 << endl;
	
	float f1 = 8.8, f2 = 9.9;
	mySwap(f1, f2);
	
	cout << "After Swaping" << endl;
	cout << "f1: " << f1 << endl;
	cout << "f2: " << f2 << endl;
	
	char ch1 = 'A', ch2 = 'B';
	mySwap(ch1, ch2);
	
	cout << "After Swaping" << endl;
	cout << "ch1: " << ch1 << endl;
	cout << "ch2: " << ch2 << endl;
	
	return 0;
}

