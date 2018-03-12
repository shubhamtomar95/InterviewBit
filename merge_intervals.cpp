#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
#define max(a, b) (a > b)?a:b
#define min(a, b) (a > b)?b:a
typedef struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
}Interval;


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
   
    if (max(temp.start, newInterval.start) > min(temp.end, newInterval.end))//(temp.start < newInterval.start && temp.end < newInterval.end)
    {
        return 0;
    }
    return -1;
}


vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<Interval> solution;
    if(intervals.size() == 0)
    {
        solution.push_back(newInterval);
        return solution;
    }
    if((newInterval.end < intervals[0].start || newInterval.start > intervals[intervals.size() -  1].end))
    {
        if(newInterval.end < intervals[0].start)
        {
            solution.push_back(newInterval);
        }

        for (int i = 0; i < intervals.size() ; ++i)
        {
            solution.push_back(intervals[i]);
        }
        if(newInterval.start > intervals[intervals.size() -  1].end)
        {
            solution.push_back(newInterval);
        }
        return solution;
    }
    
    for (int i = 0; i < intervals.size(); ++i)
    {
       Interval temp = intervals[i];
       int overlap = check_overlap(temp, newInterval);
       if(!overlap)
       {
           solution.push_back(intervals[i]);
           if(newInterval.start > intervals[i].end && newInterval.end < intervals[i + 1].start)
           {
              solution.push_back(newInterval);
           }
       }else
       {
           int start = i;
           while (i < intervals.size()  && check_overlap(intervals[i], newInterval) != 0)
           {
              i++;
           }
           
           
           Interval new_insert(min(intervals[start].start, newInterval.start), max(intervals[i].end, newInterval.end));
           solution.push_back(new_insert);
       }
    }

    
    return solution;


}
