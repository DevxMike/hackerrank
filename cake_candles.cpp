#include <algorithm>
#include <vector>
//https://www.hackerrank.com/challenges/birthday-cake-candles/problem

int birthdayCakeCandles(std::vector<int> ar) {
    int count = 0;
    const int max = *std::max_element(ar.begin(), ar.end());
    std::sort(ar.begin(), ar.end());
    for (auto r_it = ar.rbegin(); r_it < ar.rend(); r_it++) {
        if (*r_it == max) ++count;
        else return count;
    }
    return count;
}
