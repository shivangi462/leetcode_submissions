class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int x = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(abs(nums[i]-nums[j]) <= min(nums[i],nums[j])){
                      x = max(x,nums[i]^nums[j]);
                }
            }
        }
        return x;
    }
};