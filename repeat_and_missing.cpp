#include <iostream>
#include <vector>
#include <set>

using namespace std;
vector<int> repeatedNumber(const vector<int> &A)
{
    int repeated, missing, temp;
    set<int> elements;//std::map<int, int> map;
    for (int i = 0; i < A.size(); ++i)
      {
      	  temp = A[i];
      	  if (elements.find(temp) == elements.end())
      	  {
      	  	  elements.insert(temp);
      	  }else
      	  {
      	  	 repeated = temp;
      	  }
      }

      for (int i = 1; i <= elements.size() ; ++i)
      {
      	   if(elements.find(i) == elements.end())
      	   {
      	   	   missing = i;
      	   }
          
      }
      vector<int> solution;
      solution.push_back(repeated);
      solution.push_back(missing);
      cout << endl <<repeated << endl << missing << endl;
      return solution;
}

vector<int> repeatedNumber_space_optimal(const vector<int> &A)
{
    long long int sum_of_vector = 0, sum_orignal = 0;
    for (int i = 0; i < A.size(); ++i)
    {
    	sum_of_vector = sum_of_vector + A[i]; 	
    	sum_orignal = sum_orignal + i + 1;
    }

    return v;
}
int main(int argc, char const *argv[])
{
	std::vector<int> v;
	int temp;
	for (int i = 0; i < 5; ++i)
	{
		cin >> temp;
		v.push_back(temp);
	}

	std::vector<int> result = repeatedNumber_space_optimal(v);
	return 0;
}