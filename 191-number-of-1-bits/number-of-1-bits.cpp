class Solution {
public:
    int hammingWeight(uint32_t n) {
        int a=__builtin_popcount(n);
        return a;
    }
};