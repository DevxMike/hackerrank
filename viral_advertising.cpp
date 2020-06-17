#include <valarray>
#include <vector>
//https://www.hackerrank.com/challenges/strange-advertising/problem

int viralAdvertising(int n) {
    std::vector<int> likes, shares;
    likes.push_back(2);
    shares.push_back(5);
    for (int i = 0; i < n-1; ++i) {
        shares.push_back(floor(shares.back() / 2) * 3);
        likes.push_back(floor(shares.back() / 2));
    }
    return std::valarray<int>(likes.data(), likes.size()).sum();
}