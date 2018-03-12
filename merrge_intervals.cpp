#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define max(a, b) (a > b)?a:b
#define min(a, b) (a > b)?b:a
typedef struct Interva1ddsfdal {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
}Interval;
/*
int check_overlap(Interval temp, Interval newInterval)
{
    if(newInterval.start > temp.start && newInterval.start < temp.end && newInterval.end > temp.end)
    {
    	return 1;
    }

    if (newInterval.start < temp.start && newInterval.end > temp.end)
    {
    	return 2;
    }

    if (temp.start < newInterval.start && temp.end < newInterval.end)
    {
    	return 0;
    }
    return -1;
}

int inbetween(Interval a, Interval b, Interval c)
{
	if( check_overlap(a,b) == 0 && check_overlap(b, c) == 0 )
	{
		return 1;
	}
	return 0;
}

vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    for (int i = 0; i < intervals.size(); ++i)
    {
       Interval temp = intervals[i];
       int overlap = check_overlap(temp, newInterval);
       if(overlap == 1)
       {
           Interval replace(temp.start, newInterval.end);
           newInterval = replace;
           intervals[i] = replace;
       }else if(overlap == 2)
       {
           Interval replace(newInterval.start, newInterval.end);
           newInterval = replace;
           intervals[i] = replace;
       }else if(overlap == 0)
       {
       	  Interval next = intervals[i];
       	  if(inbetween(temp, newInterval, next) == 1 )
       	  {
       	  	 intervals.insert(i+ 1, &newInterval);
       	  }
       }
    }

    vector<int>::iterator it;
    it = unique(intervals.begin(), intervals.end());
    intervals.resize(distance(intervals.begin(), it));
    return intervals




}
*/
int main(int argc, char const *argv[])
{
    Interval a;
    cout << a.start << endl;		
	return 0;
}