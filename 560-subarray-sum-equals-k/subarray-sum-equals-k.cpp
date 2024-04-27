class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size();
        int sum;
        for(int i=0;i<n;i++){
          sum=nums[i];
          if(sum==k) ans++;
          for(int j=i+1;j<n;j++){
             sum+=nums[j];
             if(sum==k) ans++;
          } 
        }
        return ans;
    }
};