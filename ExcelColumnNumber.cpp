#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	string str = "BA";
	int solution = 0;
	std::reverse(str.begin(), str.end());
	for (int i = 0; i < str.length(); ++i)
	{
		char input = str.at(i);
		int int_value = (int)input - 64;
		int pow_factor = int_value*pow(26, i);
		solution = solution + pow_factor;
	}
	cout << solution << endl;
	return 0;
}