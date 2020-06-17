#include <map>
#include <vector>
#include <algorithm>

//https://www.hackerrank.com/challenges/migratory-birds/problem
using std::vector;
using std::map;
int migratoryBirds(vector<int> arr) {
    map<int, int> birds;
    map<int, int>::iterator found;
    vector<int> temp;
    int max = 0;

    sort(arr.begin(), arr.end());
    for (auto x : arr) {
        found = birds.find(x);
        if (found == birds.end())
            birds.insert(std::make_pair(x, 1));
        else
            found->second++;
    }
    for (found = birds.begin(); found != birds.end(); found++) {
        temp.push_back(found->second);
    }
    max = *std::max_element(temp.begin(), temp.end());
    for (auto x : birds)
        if (max == x.second) return x.first;

    return 0;
}