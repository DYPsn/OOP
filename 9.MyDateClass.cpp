#include <iostream>
using namespace std;

class MyDate
{
private:
	int day;
	int month;
	int year;
public:
	MyDate();
	MyDate(int, int, int);
	void displayDate();	
};

MyDate::MyDate()
{
	day = 1;
	month = 1;
	year = 2024;
	//cout << "Date Plain" << endl;
}
MyDate::MyDate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
	//cout << "Date Parameterized" << endl;
}
void MyDate::displayDate()
{
	cout << day << " - " << month << " - " << year << endl;
}

