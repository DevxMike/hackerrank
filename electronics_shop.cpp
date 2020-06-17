#include <vector>
#include <valarray>
//https://www.hackerrank.com/challenges/electronics-shop/problem
using std::vector;
int getMoneySpent(vector<int>& k, vector<int>& d, int b) {
    vector<int> sum;
    int temp;

    sort(k.begin(), k.end());
    sort(d.begin(), d.end());
    for (auto x : k) {
        for (auto it = d.begin(); it < d.end(); it++) {
            temp = x + *it;
            if (temp <= b)sum.push_back(temp);
        }
    }
    if (sum.empty()) return -1;
    else return std::valarray<int>(sum.data(), sum.size()).max();
}