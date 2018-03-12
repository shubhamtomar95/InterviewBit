#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int num_rows;
	
	if (num_rows == 0)
	{
		return solution;
	}
	vector<vector<int> > solution;
	std::vector<int> temp_row;
   temp_row.push_back(1);
    solution.push_back(temp_row);
    if (num_rows == 1)
    {
    	return solution;
    }
    temp_row.push_back(1);
    solution.push_back(temp_row);

   if (num_rows == 2)
    {
    	return solution;
    }
    
	for (int i = 2; i < num_rows; ++i)
	{
		int temp = 0;
		std::vector<int> row, row_prev;
		if(i > 0)
		{
			row_prev = solution[i - 1];
		}
		if(i == 0)
		{
			row.push_back(1);
			solution.push_back(row);

		}
        
		for (int j = 0; j <= row_prev.size() ; ++j)
		{
            if(j == 0 || j == row_prev.size())
            {
            	row.push_back(1);
            	cout << 1 << " ";
            }
            else 
            {
            	temp = row_prev[j - 1] + row_prev[j];
            	
            	row.push_back(temp);
            }


		}
        solution.push_back(row);
		


	}
	return 0;
}