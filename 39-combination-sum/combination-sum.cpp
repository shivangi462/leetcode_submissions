class Solution {
public:
    void solve(vector<int>& candidates,vector<vector<int>> &ans,vector<int> v,int i,int sum, int target){
      if(i>=candidates.size()) return ;

      if(sum==target){
        ans.push_back(v);return ;
      }
      if(sum>target){
            return;
      }
      v.push_back(candidates[i]); 
      solve(candidates,ans,v, i, sum + candidates[i], target);
      v.pop_back(); 
      solve(candidates,ans,v, i + 1, sum, target);


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        solve(candidates, ans,{}, 0, 0,target);
            
        return ans; 
    }
};