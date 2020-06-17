#include <sstream>
#include <valarray>
#include <vector>
#include <iostream>
//https://www.hackerrank.com/challenges/bon-appetit/problem
using std::vector;
using std::valarray;
void bonAppetit(vector<int> bill, int k, int b) {
    int temp = valarray<int>(bill.data(), bill.size()).sum()/2;
    std::stringstream s;
    if (temp == b) {
        bill.erase(bill.begin() + k);
        temp = valarray<int>(bill.data(), bill.size()).sum() / 2;
        s << (b - temp);
    }
    else
        s << "Bon Appetit";
    std::cout << s.str();
}