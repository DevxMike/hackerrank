#include <vector>
//https://www.hackerrank.com/challenges/permutation-equation/problem

using std::vector;
vector<int> permutationEquation(const vector<int>& p) {
    if (p.empty()) return vector<int>();

    int i, j, temp;
    vector<int> result;
    for (i = 0; i<=p.size(); ++i) {
        for (j = 0; j < p.size(); ++j) {
            if ((temp = p[p[j] - 1]) && temp == (i+1)) {
                result.push_back(j+1);
                break;
            }
        }
    }
    return result;
}