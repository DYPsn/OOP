#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string str;
	ifstream fis("MyFile.txt");
	
	/*getline(fis, str);
	cout << str << endl;
	getline(fis, str);
	cout << str << endl;*/
	
	while(getline(fis,str))
	{
		cout << str << endl;
	}
	
	fis.close();	
	
	return 0;
}
