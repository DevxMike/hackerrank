#include <string>
#include <algorithm>
//https://www.hackerrank.com/challenges/repeated-string/problem

long repeatedString(std::string s, long n) {
    if(s.size() == 1 && s.front() == 'a')
        return n;
    else if(std::count(s.begin(), s.end(), 'a') == 0)
        return 0;
    else if(static_cast<long>(s.size()) > n)
        return static_cast<long>(count(s.begin(), s.begin()+static_cast<int>(n), 'a'));


    int as = count(s.begin(), s.end(), 'a');
    long times = n / static_cast<long>(s.size());
    long quantity = static_cast<long>(as) * times;
    long rest = n % static_cast<long>(s.size());
    std::string temp("");
    while(temp.size()<= n % static_cast<long>(s.size())){
        temp+=s;
    }
    while(temp.size()>static_cast<int>(rest))
        temp.erase(temp.end()- 1, temp.end());
    rest = static_cast<long>(std::count(temp.begin(), temp.end(), 'a'));
    quantity += rest;    
    return quantity;
}