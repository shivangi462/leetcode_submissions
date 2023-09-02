class Solution {
public:
    
    int f(int index,string& s,unordered_map<string,bool>& mp,vector<int> &dp){
      if(index>=s.size()) return 0;
      if(dp[index]!=-1) return dp[index];

      string curr="";
      int res=s.size();
      for(int i=index;i<s.size();i++){
        curr.push_back(s[i]);
        int extracnt=curr.size();

        if(mp[curr]) extracnt=0;

        extracnt+=f(i+1,s,mp,dp);
        res=min(res,extracnt);
      }
      return dp[index]=res;
    }
    int minExtraChar(string s, vector<string>& dict) {
       

        unordered_map<string,bool> mp;

        for(auto i:dict) mp[i]=true;

        vector<int> dp(s.size(),-1);

        return f(0,s,mp,dp);
    }
};