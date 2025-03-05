class Solution {
public:
    long long coloredCells(int n) {
        if (n==1) return n;
        return 1+4LL*n*(n-1)/2;

    }
};