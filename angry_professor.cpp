#include <vector>
#include <string>
#include <functional>
#include <iterator>
#include <algorithm>

//https://www.hackerrank.com/challenges/angry-professor/problem

std::string angryProfessor(int k, std::vector<int> a) {
    if (a.empty() || k > a.size()) return "YES";

    std::vector<int> b;
    std::copy_if(a.begin(), a.end(),
        std::insert_iterator<std::vector<int> >(b, b.begin()), 
        std::bind2nd(std::less_equal<int>(), 0));
    if (b.size() >= k) return "NO";
    else return "YES";
}