#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
//https://www.hackerrank.com/challenges/magic-square-forming/problem

using std::vector;

int formingMagicSquare(vector<vector<int>> s) {
    vector<std::string> permutations({
        "816357492", "618753294", "492357816", "294753618",
        "834159672", "438951276", "672159834", "276951438"
    }); 
    std::string temp;
    std::stringstream ss;
    vector<int> results;
    int i, r, l, diff;
    for(auto x : s){ 
        for(auto y : x){
            ss << y;
        }
    }
    ss >> temp;
    for(auto pos_it = permutations.begin(); pos_it < permutations.end(); ++pos_it){
        auto tmp_str = temp.begin();
        diff = 0;
        for(auto pos_str = pos_it->begin(); pos_str < pos_it->end() && tmp_str < temp.end(); ++pos_str, ++tmp_str){
            if(*tmp_str != *pos_str){
                r = static_cast<int>(*tmp_str - '0');
                l = static_cast<int>(*pos_str - '0');
                diff += abs(l - r);
            }
        }
        results.push_back(diff);
    }

    return *std::min_element(results.begin(), results.end());
}