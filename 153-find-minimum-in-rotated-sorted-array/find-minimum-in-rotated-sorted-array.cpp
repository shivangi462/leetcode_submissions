class Solution {
public:
    int findMin(vector<int>& nums) {
      int j=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto i:nums){ 
          pq.push({i,j});
          j++;
          };

        pair<int,int> ans=pq.top();
        cout<<ans.second;
        return ans.first;
    }
};