#include <iostream>
#include <cstring>

class Mystring
{
private:
    int len;
    char* buff;

public:
    Mystring();                  
    Mystring(char ch);        
    Mystring(const char* str);
    ~Mystring();               

    void display() const;
    int findlength() const;
};

Mystring::Mystring()
{
    len = 1;
    buff = new char[len];
    buff[0] = '\0';
}

Mystring::Mystring(char ch)
{
    len = 2;
    buff = new char[len];
    buff[0] = ch;
    buff[1] = '\0';
}

Mystring::Mystring(const char* str)
{
    len = std::strlen(str) + 1;
    buff = new char[len];
    std::strcpy(buff, str);
}

Mystring::~Mystring()
{
    delete[] buff;
}

void Mystring::display() const
{
    std::cout << buff << std::endl;
}

int Mystring::findlength() const
{
    return std::strlen(buff);
}

int main()
{
    Mystring s1;  
    s1.display();
    
    Mystring s2('A'); 
    s2.display();   
    
    Mystring s3("Pranav");
    s3.display();      
     
    return 0;
}
