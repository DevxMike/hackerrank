#include <vector>
#include <memory>
#include <valarray>
#include <iterator>
#include <iostream>
//https://www.hackerrank.com/challenges/extra-long-factorials/problem
//could have done it better, but works eh? :)
using std::vector;
using std::valarray;
using ptr = std::shared_ptr<vector<int> >;
void sum_arrays(vector<ptr>& v, vector<int>& target) {
        int max = 0;
        vector<valarray<int> > vals;
        
        for (auto x : v) {
            max = (x->size() > max ? x->size() : max);
        }
        for (auto x : v) {
            while (x->size() != max) {
                x->insert(x->begin(), 0);
            }
            vals.push_back(valarray<int>(x->data(), x->size()));
        }
        valarray<int> tmp(0, max);
        for (auto x : vals) {
            tmp += x;
        }
        int carry = 0;
        target = vector<int>(begin(tmp), end(tmp));
        for (auto it = target.rbegin(); it < target.rend(); ++it) {
            *it += carry;
            carry = 0;
            if (*it < 10) 
                continue;
            carry = *(it) / 10;
            *(it) %= 10;
        }
        if (carry)
            target.insert(target.begin(), carry);
}

void multiply(vector<int>& v, int x) {
    
    int rest, carry, i = 0;
    vector<ptr> temp;
    while (x != 0) {
        carry = 0;
        temp.insert(temp.begin(), (ptr(new vector<int>())));
        (rest = x % 10, x /= 10);
        for (auto it = v.rbegin(); it < v.rend(); ++it) {
            temp.front()->insert(temp.front()->begin(), *it * rest);
        }
        for (auto it = temp.front()->rbegin(); it < temp.front()->rend(); ++it) {
            *it += carry;
            carry = 0;
            if (*it < 10)
                continue;
            carry = (*it) / 10;
            (*it) %= 10;
        }
        if(carry)
            temp.front()->insert(temp.front()->begin(), carry);
        for (int j = 0; j < i; ++j) {
            temp.front()->push_back(0);
        }
        ++i;
    }
    sum_arrays(temp, v);
}
void extraLongFactorials(int n) {
    if (n < 2)
        std::cout << 1;
    else {
        vector<int> result_holder({ 1 });
        for (int i = 1; i <= n; ++i) {
            multiply(result_holder, i);
        }
        copy(result_holder.begin(), result_holder.end(),
            std::ostream_iterator<int>(std::cout));
    }
}