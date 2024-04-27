class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size();
        int prefix[n];
        prefix[0]=nums[0];

        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        for(int i=0;i<n;i++){
            cout<<prefix[i];
        }

        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            if(prefix[i]==k) ans++;

            if(mp.find(prefix[i]-k)!=mp.end()){
                ans+=mp[prefix[i]-k];
            }

            mp[prefix[i]]++;
        }
        return ans;
    }
};