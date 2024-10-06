#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fos("MyFile.txt");
	
	fos << "This is my trial file" << endl;
	fos << "Created for file handling demo";
	
	fos.close();
	
	return 0;
}
