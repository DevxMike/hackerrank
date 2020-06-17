#include <vector>
#include <valarray>
//https://www.hackerrank.com/challenges/a-very-big-sum/problem

using l = long;
l aVeryBigSum(std::vector<l> ar) {
    return std::valarray<l>(ar.data(), ar.size()).sum();
}