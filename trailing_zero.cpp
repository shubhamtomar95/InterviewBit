#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int input = 9247, five_conunt = 0, ten_count = 0;
	int count = 0;
	for (int i = 5; input/i >= 1; i = i * 5)
	{
		count = count + input/i;
	}
	/*
	for (int i = 1; i <= input; ++i)
	{
		if(i % 10 == 0)
		{
			int num = i, digit = 0;
			while(digit == 0)
			{
                digit = num % 10;
                num = num / 10;
                ten_count = ten_count + 1;
			}
			
			continue;
		}
		
		if (i % 5 == 0)
		{
			five_conunt = five_conunt + 1;
		}
	}*/
	cout << count << endl;
	return 0;
}