#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
private:
	int len;
	char* buff;
public:
	void display();
	MyString();	
	MyString(char* str);
	MyString(MyString&);
	MyString& operator=(const MyString&);
	~MyString();
};

MyString::~MyString()
{
	delete[]buff;
}
MyString::MyString()
{
	len = 1;
	buff = new char;
	*buff = '\0';
	//cout << "String Plain" << endl;
}
MyString::MyString(char* str)
{
	len = strlen(str);
	buff = new char[len+1];
	strcpy(buff, str);
	//cout << "String Parameterized" << endl;
}
MyString::MyString(MyString&s)
{
	len = s.len;
	buff = new char[len+1];
	strcpy(buff, s.buff);
//0cout << "String Copy" << endl;
}
MyString& MyString::operator=(const MyString&s)
{
	len = s.len;
	buff = new char[len+1];
	strcpy(buff, s.buff);
	
	cout << "String =" << endl;
	
	return *this;
}

void MyString::display()
{
	cout << buff << endl;
}

