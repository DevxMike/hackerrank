#include <sstream>
#include <string>
//https://www.hackerrank.com/challenges/time-conversion/problem
using std::string;
using std::stringstream;
string timeConversion(string s) {
    int hours;
    stringstream ss;
    enum f{AM, PM};
    string h(&s[0], &s[2]);
    f fmt = string(&s[s.find('M') - 1], &s[s.find('M') + 1]) == "AM" ? AM : PM;
    ss << h;
    ss >> hours;
    ss = stringstream();
    h = string();
    switch (fmt) {
    case AM:
        if (hours == 12)
            hours = 0;
        break;
    case PM:
        if(hours!=12)
            hours += 12;
        break;
    }
    ss << hours;
    if (hours < 10) h = "0";
    h += ss.str();
    s.erase(s.begin(), s.begin()+2);
    s.erase(s.end() - 2, s.end());
    return h + s;
}