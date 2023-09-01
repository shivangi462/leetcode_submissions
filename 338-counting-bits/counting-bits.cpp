class Solution {
public:
    int countbits(int n)
    {
    // base case
    if (n == 0)
        return 0;
    else
        // if last bit set add 1 else add 0
        return (n & 1) + countbits(n >> 1);
    }
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++){
            int ans=countbits(i);
            v.push_back(ans);
        }
        return v;
    }
};