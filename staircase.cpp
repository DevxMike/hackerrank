#include <iostream>
//https://www.hackerrank.com/challenges/staircase/problem

using std::cout;
using std::endl;
void staircase(int n) {
    for (int i = 0; i < n; ++i) {
        cout << setw(n - i);
        for (int j = 0; j <= i; ++j) {
             cout << '#';
        }
        cout << endl;
    }
}