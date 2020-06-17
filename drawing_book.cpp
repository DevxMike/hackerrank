//https://www.hackerrank.com/challenges/drawing-book/problem
using b = struct {
    int l;
    int r;
    void operator++(int) {
    l += 2;
    r += 2;
}
void operator--(int) {
    l -= 2;
    r -= 2;
}
};
bool operator==(b& _b, int n) {
    return(_b.l == n || _b.r == n);
}
int pageCount(int n, int p) {
    if (n == p || p == 1)
        return 0;

    enum page { even, odd };
    enum beg_end { beg, end };
    int count = 0;

    page _p = (n % 2) ? odd : even;
    beg_end _b = (p > n / 2) ? end : beg;
    b bk = _b == beg ? b{ 0,1 } : (_p == odd ? b{ n - 1, n } : b{n, n + 1});
    while (!(bk == p)) {
        switch (_b) {
        case beg:
            bk++;
            break;
        case end:
            bk--;
        }
        count++;
    }
    return count;
}