class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char ,int> mp;
        int cnt=0;
        unordered_set<int> used_freq;

        for(auto i:s){
          mp[i]++;
        }

        for(auto& kv:mp){
          int freq=kv.second;
          while(freq > 0 && used_freq.find(freq)!=used_freq.end()){
            freq--;
            cnt++;
          }
          used_freq.insert(freq);
        }
        return cnt;

        
    }
};