#include <vector>
#include <valarray>
//https://www.hackerrank.com/challenges/the-hurdle-race/problem
int hurdleRace(int k, std::vector<int>& height) {
    if (height.empty()) return 0;
    int max = std::valarray<int>(height.data(), height.size()).max();
    return k >= max ? 0 : max - k;
}