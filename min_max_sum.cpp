#include <iostream>
#include <vector>
#include <algorithm>
//https://www.hackerrank.com/challenges/mini-max-sum/problem

void miniMaxSum(std::vector<int> arr) {
    long min, max;
    min = max = 0;
    std::sort(arr.begin(), arr.end());
    auto it = arr.begin();
    auto rit = arr.rbegin();
    for (; it < arr.end() -1 && rit < arr.rend() - 1; it++, rit++) {
        min += *it;
        max += *rit;
    }
    std::cout << min << " " << max;
}