#include <vector>
#include <memory>
#include <algorithm>
//https://www.hackerrank.com/challenges/picking-numbers/problem
using std::vector;
using vint = vector<std::shared_ptr<vector<int>>>;
int pickingNumbers(vector<int> a) {
    if (a.empty()) return 0;
    std::sort(a.begin(), a.end());
    int i = 0;
    vint tab;
    vector<int>::iterator it, it_em;
    for (it = a.begin(); it < a.end(); ++it, ++i) {
        if (it + 1 == a.end())
            break;
        tab.push_back(std::shared_ptr<vector<int> >(new vector<int>));
        tab[i]->push_back(*it);
        for (it_em = it + 1; it_em < a.end(); ++it_em) {
            if (abs(tab[i]->at(0) - *it_em) <= 1)
                tab[i]->push_back(*it_em);
            else break;
        }
    }
    i = 0;
    for (auto x : tab) {
        i = i > x->size() ? i : x->size();
    }
    
    return i;
}