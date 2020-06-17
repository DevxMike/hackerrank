#include <string>
#include <sstream>
//https://www.hackerrank.com/challenges/day-of-the-programmer/problem
using std::string;
string dayOfProgrammer(int year) {
    if (year == 1918)
        return "26.09.1918";

    string temp;
    std::stringstream ss;
    ss << year;
    enum is_leap { LEAP, NORMAL };
    is_leap l = ((year < 1918 && year % 4 == 0) || (year % 400 == 0 || (year % 4 == 0 && year % 100))) ? LEAP : NORMAL;
    switch (l) {
    case LEAP:
        temp = "12.09.";
        break;
    case NORMAL:
        temp = "13.09.";
        break;
    }
    return temp+ss.str();
}