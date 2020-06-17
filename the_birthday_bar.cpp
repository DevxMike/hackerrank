#include <vector>
//https://www.hackerrank.com/challenges/the-birthday-bar/problem

using std::vector;
int birthday(vector<int> s, int d, int m) {
    vector<int>::iterator a, b;
    int combinations = 0;
    int temp = 0;
    for (a = s.begin(); a < s.end(); a++) {
        for (b = a; b < s.end() && b < a + m; b++) {
            temp += *b;
        }
        if (temp == d)combinations++;
        temp = 0;
    }

    return combinations;
}