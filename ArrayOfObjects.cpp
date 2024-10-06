#include <iostream>
#include "MyStringClass.cpp"
using namespace std;

int main()
{
	MyString boys[5];
	boys[0] = MyString("Pranav");
	boys[1] = MyString("Nikhil"); 
	boys[2] = MyString("Hasan");
	boys[3] = MyString("Soham");
	boys[4] = MyString("Pankaj");
	
	//boys[0].display();
	for(int i = 0; i < 5; i++)
		boys[i].display();

	return 0;	
}
