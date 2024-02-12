class Solution {
public:
    int majorityElement(vector<int>& v) {
        map<int,int> mp;
     int n=v.size();
     for(int i=0;i<n;i++){
       mp[v[i]]++;
     }

     for(auto i:mp){
        if(i.second>n/2) return i.first;
     }
     return -1;
    }
};