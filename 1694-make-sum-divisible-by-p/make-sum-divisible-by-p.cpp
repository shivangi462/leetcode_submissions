class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
      int n=nums.size();
        long long t_sum=0;
        for(int i=0;i<n;i++){
          t_sum+=nums[i];
        }

        
        int t_rem=t_sum%p;
        if(t_rem==0)return 0;
        // cout<<t_sum;
        unordered_map<int,int> mp;  // rem,index
        int size=INT_MAX;
        long long sum=0;
        for(int i=0;i<n;i++){
          sum+=nums[i];
           int rem=sum%p;
           if(rem==t_rem){
             size=min(size,i+1);
           }
           if(mp.find(rem - t_rem)!=mp.end()){
             size=min(size,i-mp[rem-t_rem]);
           }
           if(mp.find(p+rem-t_rem)!=mp.end()){
              size=min(size,i-mp[p+rem-t_rem]);
           }
           mp[rem]=i;
        }
        if(size>=nums.size()) return -1;
        return size;
    }
};