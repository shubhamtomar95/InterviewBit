#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, char const *argv[])
{
	int input = 2147447412;
	if (input < 0)
	{
		cout << "False" << endl;
		return 0;
	}
	stringstream ss;
	ss << input;
	string input_str = ss.str();
	int len = input_str.length();
	for (int i = 0; i <= input_str.length() / 2; ++i)
	{
		if(input_str.at(i) != input_str.at(len - 1 -i))
		{
			cout << "False" << endl;
			return 0;
		}		

	}	
	cout << "True" << endl;

	return 1;
}