#include <cmath>
//https://www.hackerrank.com/challenges/sherlock-and-squares/problem

int squares(int a, int b) {
    int count = 0, new_int;
    double tmp;
    for (int i = a; i <= b; ++i) {
        tmp = sqrt(i);
        new_int = sqrt(i);
        if (tmp > new_int) {
            new_int = pow(floor(tmp) + 1, 2);
            i = new_int - 1;
        }
        else
            ++count;
    }
    return count;
}