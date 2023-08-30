class Solution {
public:
    int minOperations(vector<int>& nums) {
      int n=nums.size();
      int ans=0;
      
        for(int i=1;i<n;i++){
           if(nums[i]>nums[i-1]) continue;
           else{
             ans=ans+(abs(nums[i]-nums[i-1])) +1;
             nums[i]+=(abs(nums[i]-nums[i-1])) +1;
           } 
           
        }
        for(int i=0;i<n;i++) cout<<nums[i];
        return ans;
    }
};