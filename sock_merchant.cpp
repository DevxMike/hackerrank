#include <map>
#include <vector>
//https://www.hackerrank.com/challenges/sock-merchant/problem
using m = std::map<int, int>;
int sockMerchant(int n, std::vector<int> ar) {
    m socks;
    m::iterator iter;
    int quantity = 0;

    for (auto sock : ar) {
        iter = socks.find(sock);
        if (iter == socks.end())
            socks.insert(std::make_pair(sock, 1));
        else
            iter->second++;
    }
    for (auto sock : socks) {
        quantity += sock.second / 2;
    }
    return quantity;
}