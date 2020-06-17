#include <vector>
#include <valarray>
//https://www.hackerrank.com/challenges/simple-array-sum/problem

int simpleArraySum(std::vector<int> ar) {
    return std::valarray<int>(ar.data(), ar.size()).sum();
}