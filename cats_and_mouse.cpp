#include <string>
//https://www.hackerrank.com/challenges/cats-and-a-mouse/problem

std::string catAndMouse(int x, int y, int z) {
    int A, B;
    A = abs(z - y);
    B = abs(z - x);
    if (A == B) return "Mouse C";
    else if (A > B) return "Cat A";
    else return "Cat B";
}