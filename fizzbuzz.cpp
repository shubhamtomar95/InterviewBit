#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int A = 3;
    vector<string> solution;
    for (int i = 1; i <= A; ++i)
	{
		if(i % 3 == 0 && i % 5 == 0)
		{
			solution.push_back("FizzBuzz");
			continue;
		}
		if (i % 3 == 0)
		{
			solution.push_back("Fizz");
			continue;
		}
		if (i % 5 == 0)
		{
			solution.push_back("Buzz");
			continue;
		}
        
        stringstream ss;
        ss << i;
        string str = ss.str();
        solution.push_back(str);
    }
    for (int i = 0; i < A; ++i)
    {
    	cout << solution[i] << endl;
    }
	return 0;
}