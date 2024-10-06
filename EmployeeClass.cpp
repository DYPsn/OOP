#include <iostream>
#include "MyStringClass.cpp"
#include "MyDateClass.cpp"
using namespace std;

class Employee
{
private:
	int empId;
	MyString empName;
	float basicSalary;
	MyDate bDate;
public:
	Employee();
	Employee(int, char*, float, int, int, int);
	virtual void display();
	virtual float calculateSalary();	
};

Employee::Employee()
{
	//cout << "Employee Plain" << endl;
	empId = 101;
	basicSalary = 5000;
	
}
Employee::Employee(int id, char* str, float sal, int d, int m, int y) : empName(str), bDate(d, m, y)
{
//	cout << "Employee Parameterized" << endl;
	empId = id;
	//empName = MyString(str);
	basicSalary = sal;
	//bDate = MyDate(d, m, y);
	
}
void Employee::display()
{
	cout << "Employee ID: " << empId << endl;
	cout << "Employee Name: ";
	empName.display();
	cout << "Basic Salary : " << basicSalary << endl;
	cout << "Birth Date: ";
	bDate.displayDate();
}
float Employee::calculateSalary()
{
	float da, hra, pf, net;
	
	da = basicSalary * 0.50;
	hra = basicSalary * 0.20;
	pf = basicSalary * 0.05;
	net = basicSalary + da + hra - pf;
	
	cout << "Employee->CalSal" << endl;
	
	return net;
}

	int main()
{
	Employee e1;
	e1.display();
	cout << "Net Salary: " << e1.calculateSalary() << endl;
	
	cout << "\n======================================\n";
	
	Employee e2(123, "Dhanashri", 50000, 21, 3, 2004);
	e2.display();
	cout << "Net Salary: " << e2.calculateSalary() << endl;
	
	return 0;
}


