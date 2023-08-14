class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp; //storing the nums[i]->i;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int req=target-nums[i];

            if(mp.find(req)!=mp.end()){
                ans.push_back(mp[req]);
                ans.push_back(i+1);
                
                break;
            }
            mp[nums[i]]=i+1;
        }
        return ans;
    }
};