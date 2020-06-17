#include <vector>
#include <valarray>
#include <string>
//https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

int designerPdfViewer(std::vector<int>& h, std::string& word) {
    if (h.empty() || word.empty()) return 0;

    std::vector<int> heights;
    for (auto it = word.begin(); it < word.end(); ++it) {
        heights.push_back(h[*it - 'a']);
    }
    int max = std::valarray<int>(heights.data(), heights.size()).max();

    return max * word.size();
}