#include <iostream>
using namespace std;

class ComplexNo
{
private: 
	int real;
	int imag;
	static int count;
public:
	ComplexNo();
	ComplexNo(int, int);
	void display();	
	ComplexNo operator+(ComplexNo);
	ComplexNo operator-(ComplexNo);
	ComplexNo operator++();
	ComplexNo operator++(int);
	static void showCount();
};

void ComplexNo::showCount()
{
	cout << "Total no of Objects: " << count << endl;
}

int ComplexNo::count = 0;

ComplexNo::ComplexNo()
{
	real = 0;
	imag = 0;
	count++;
}
ComplexNo::ComplexNo(int r, int i)
{
	real = r;
	imag = i;
	count++;
}
void ComplexNo::display()
{
	cout << "Complex No: " << real << "+" << imag << "i" << endl;
}

ComplexNo ComplexNo::operator+(ComplexNo c)
{
	ComplexNo temp;
	temp.real = this->real + c.real;
	temp.imag = this->imag + c.imag;
	
	return temp;
}

ComplexNo ComplexNo::operator-(ComplexNo c)
{
	ComplexNo temp;
	temp.real = this->real - c.real;
	temp.imag = this->imag - c.imag;
	
	return temp;
}

ComplexNo ComplexNo::operator++()
{
	this->real++;
	this->imag++;
	
	return *this;
}
ComplexNo ComplexNo::operator++(int n)
{
	ComplexNo temp = *this;
	this->real++;
	this->imag++;
	
	return temp;
}

int main()
{
	ComplexNo c1;
	c1.display();
	
	ComplexNo c2(2, 3);
	c2.display();
	
	ComplexNo c3(4, 5);
	c3.display();
	
	ComplexNo c4 = c2 + c3;
	//ComplexNo c4 = c2.operator+(c3);
	c4.display();
	
	ComplexNo c5 = c4 - c2;
	//c5 = c4.operator-(c2);
	c5.display();
	
	ComplexNo c6;
	c6 = ++c2;
	//c6 = c2.operator++();
	c6.display();
	c2.display();
	
	ComplexNo c7;
	c7 = c2++;
	c7.display();
	c2.display();

	ComplexNo::showCount();
	
	ComplexNo* arr = new ComplexNo[5];
	arr[0] = ComplexNo(1,2);
	arr[1] = ComplexNo(2,3);
	arr[2] = ComplexNo(3,4);
	arr[3] = ComplexNo(4,5);
	arr[4] = ComplexNo(5,6);
	
	for(int i = 0; i < 5; i++)
	{
		arr[i].display();
	}

	return 0;	
}
