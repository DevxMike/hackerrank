#include <vector>
#include <valarray>

//https://www.hackerrank.com/challenges/2d-array/problem

using std::vector;
using std::valarray;

int hourglassSum(vector<vector<int>>& arr) {
    vector<int> sums(16, 0);
    int j = 0;
    for(auto it = arr.begin(); it < arr.begin() + 4; ++it)
        for(int i = 0; i < 4; ++i){
            for(auto v_it = it->begin() + i; v_it < (it->begin() + i) + 3; ++v_it)
                sums[j] += *v_it;
            ++j;
        }
    j = 0;
    for(auto it = arr.begin() + 2; it < arr.end(); ++it)
        for(int i = 0; i < 4; ++i){
            for(auto v_it = it->begin() + i; v_it < (it->begin() + i) + 3; ++v_it)
                sums[j] += *v_it;
            ++j;
        }
    j = 0;
    for(auto it = arr.begin() + 1; it < arr.begin() + 5; ++it)
        for(auto v_it = it->begin() + 1; v_it < it->begin() + 5; ++v_it){
            sums[j++] += *v_it;
        }
    
    return valarray<int>(sums.data(), sums.size()).max();
}