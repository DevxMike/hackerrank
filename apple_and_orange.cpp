#include <vector>
#include <iostream>
//https://www.hackerrank.com/challenges/apple-and-orange/problem

using std::vector;
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int ap, orn;
    ap = orn = 0;
    for (auto x : apples) {
        if (x + a >= s && x + a <= t)
            ++ap;
    }
    for (auto x : oranges) {
        if (x + b >= s && x + b <= t)
            ++orn;
    }
    std::cout << ap << std::endl << orn;
}