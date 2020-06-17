#include <vector>
#include <iterator>
#include <iostream>
//https://www.hackerrank.com/challenges/plus-minus/problem
using std::vector;
void plusMinus(vector<int> arr) {
    vector<int> q{ 0,0,0 };
    std::ostream_iterator<float, char> out(std::cout, "\n");
    for (auto x : arr) {
        if (x > 0)
            q[0]++;
        else if (x < 0)
            q[1]++;
        else
            q[2]++;
    }
    for (auto x : q)
        *out++ = 1.0f*x / arr.size();
}