#include <vector>
//https://www.hackerrank.com/challenges/compare-the-triplets/problem

using std::vector;
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> result{ 0,0 };
    for (auto it_a = a.begin(), it_b = b.begin(); it_a < a.end() && it_b <= b.end(); ++it_a, ++it_b) {
        if (*it_a > *it_b)
            result[0]++;
        else if (*it_a == *it_b)
            continue;
        else
            result[1]++;
    }
    return result;
}