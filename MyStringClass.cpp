#pragma once
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
	MyString(char ch);
	MyString(char* str);
	MyString(MyString&);
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
}
MyString::MyString(char ch)
{
	len = 1;
	buff = new char;
	*buff = ch;
}
MyString::MyString(char* str)
{
	len = strlen(str);
	buff = new char[len+1];
	strcpy(buff, str);
}
MyString::MyString(MyString&s)
{
	len = s.len;
	buff = new char[len+1];
	strcpy(buff, s.buff);
}
void MyString::display()
{
	cout << "String is: " << buff << endl;
}

int main()
{
	MyString s1;
	s1.display();
	
	MyString s2('A');
	s2.display();
	
	MyString s3("DYPSN");
	s3.display();
	
	{
		MyString s4(s3);
		s4.display();
	}
	s3.display();
	
	MyString s5("Siddhu");
	s5.display();

	{
		MyString s6 = s5;
		s6.display();
	}
	s5.display();
	
	
	
	return 0;
}
