class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n=nums.size();

        long long totalSum=0;
        for(int i=0;i<n;i++){
          totalSum+=nums[i];
        }

        int remainder1=totalSum%p;
        if(remainder1==0)return 0;
        unordered_map<int,int> mp;  // index_rem,index
        int size=INT_MAX;
        long long sum=0;
        for(int i=0;i<n;i++){
          sum+=nums[i];
           int index_rem=sum%p;
           if(index_rem==remainder1){
             size=min(size,i+1);
           }
           if(mp.find(index_rem - remainder1)!=mp.end()){
             size=min(size,i-mp[index_rem-remainder1]);
           }
           if(mp.find(p+index_rem-remainder1)!=mp.end()){
              size=min(size,i-mp[p+index_rem-remainder1]);
           }
           mp[index_rem]=i;
        }
        if(size>=nums.size()) return -1;
        return size;
    }
};