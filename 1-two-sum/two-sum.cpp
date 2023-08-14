class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      //   unordered_map<int,int> mp;

      //   for(int i=0;i<nums.size();i++){
      //       int rem=target-nums[i];
      //       if(mp.find(rem)!=mp.end()) return {mp[rem],i};
      //       mp[nums[i]]=i;
      //   }
      // return {-1,-1};  
      map<int,int> mp; //storing the nums[i]->i;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int req=target-nums[i];

            if(mp.find(req)!=mp.end()){
                ans.push_back(i);
                ans.push_back(mp[req]);
                break;
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};