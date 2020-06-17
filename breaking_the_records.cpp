#include <vector>
#include <initializer_list>
//https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

using std::vector;
using std::initializer_list;
vector<int> breakingRecords(vector<int> scores) {
    if (scores.size() <= 1)
        return vector<int>(initializer_list<int>{0, 0});

    int i = 0, j = 0;
    int max, min;
    max = min = scores.front();
    for (auto it = scores.begin()+1; it<scores.end(); ++it) {
        if (min > *it) {
            min = *it;
            ++j;
        }
        else  if(max < *it){
            max = *it;
            ++i;
        }
    }
    return vector<int>(initializer_list<int>{ i, j });
}