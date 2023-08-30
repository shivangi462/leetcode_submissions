class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        long long score=0;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(k--){
          int tp=pq.top();
          cout<<tp<<" ";
          pq.pop();
          score+=tp;
          tp=ceil((double)tp/3);
          cout<<tp<<" ";
          pq.push(tp);
        }
        return score;
    }
};