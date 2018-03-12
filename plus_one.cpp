#include <iostream>
#include <vector>
using namespace std;

int count_initial_zeros(vector<int> &v)
{
    int count = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        if(v[i] != 0)
        {
           break;
        }
        count = count + 1;
    }
    return count;
}
vector<int> plusOne(vector<int> &A) {
    int size = (int) A.size();
 	int first_digit = A[0];
    if (check_last(A))
    {   
    	vector<int> solution;

    	if(first_digit != 0)
    	{    		
    		solution.push_back(1);
    		for (int i = 0; i < size ; ++i)
    		{
    			solution.push_back(0);
    		}
    	}
    	else
    	{
           solution.push_back(1);
    		for (int i = 0; i < size - 1 ; ++i)
    		{
    			solution.push_back(0);
    		}
    	}

    	return solution;
    }
    int sum, carry, index = size - 1;
    if(first_digit == 0)
    {
        int zeros = count_initial_zeros(A);
    	vector<int>::const_iterator first = A.begin() + zeros;
    	vector<int>::const_iterator last = A.end();//() + index;
    	vector<int> modified(first, last);
        
        size = modified.size();
        index = size - 1;
    	sum = modified[index] + 1;

    	carry = sum / 10;
    	modified[index] = sum % 10;
    	index = index - 1;
    	while(carry && index >= 0)
    	{
    		sum = modified[index] + carry;
    		modified[index] = sum % 10;
    		carry = sum / 10;
    		index = index - 1;
    	}
        return modified;
    }
    else
    {
    	sum = A[index] + 1;
    	carry = sum / 10;
    	A[index] = sum % 10;
    	index = index - 1;
    	while(carry && index >= 0)
    	{
    		sum = A[index] + carry;
    		A[index] = sum % 10;
    		carry = sum / 10;
    		index = index - 1;
    	}
    	vector<int> solution(A);
    	return solution;
    }
    vector<int> v;
    return v;
}

bool check_last(std::vector<int> &v)
{
	if(v[0] == 0)
	{
	    for (int i = 1; i < v.size(); ++i)
	    {
		    if (v[i] != 9)
		    {
			    return false;
		    }
	    }
	}else {
	for (int i = 0; i < v.size(); ++i)
	{
		if (v[i] != 9)
		{
			return false;
		}
	}
	    
	}

	return true;
}

int main(int argc, char const *argv[])
{
    vector<int> input;// = [ 0, 3, 7, 6, 4, 0, 5, 5, 5 ];
    input.push_back(0);
    for (int i = 0; i < 6; ++i)
    {   
        int n;
        cin >> n;
        input.push_back(n);
    }
    vector<int> solution = plusOne(input);
    for (int i = 0; i < solution.size(); ++i)
    {
        cout << solution[i];
    }
    cout << endl;
    return 0;
}
