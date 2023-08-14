class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp; //storing the nums[i]->i;
        
        for(int i=0;i<nums.size();i++){
            int req=target-nums[i];

            if(mp.find(req)!=mp.end()){
                return {mp[req],i+1};
            }
            mp[nums[i]]=i+1;
        }
        return {-1,-1};
    }
};