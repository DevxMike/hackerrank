#include <vector>
//https://www.hackerrank.com/challenges/diagonal-difference/problem

using std::vector;
int diagonalDifference(vector<vector<int>> arr) {
    int right = 0, left = 0, sizei = 0, sized = arr.size() - 1;
    for (auto x : arr) {
        left += x[sizei++];
        right += x[sized--];
    }
    return (right - left > 0 ? right - left : -(right - left));
}