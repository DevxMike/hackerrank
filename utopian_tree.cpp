#include <vector>
//https://www.hackerrank.com/challenges/utopian-tree/problem

int utopianTree(int n) {
    int initial = 1;
    std::vector<int> heights;
    heights.push_back(1);
    for (int i = 0; i < n; ++i) {
        heights.push_back(i % 2 ? heights.back() + initial : heights.back() * 2);
    }
    return heights.back();
}