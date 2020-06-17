#include <vector>

// https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem

using std::vector;

vector<int> rotLeft(vector<int>& a, int d) {
    while(d--){
        a.push_back(a.front());
        a.erase(a.begin(), a.begin() + 1);
    }
    return a;
}