class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
       int ans=0;
       vector<vector<int>> fmou;
       for(int i=0;i<reward1.size();i++){
             fmou.push_back({reward1[i]-reward2[i],i}); 
       }
       sort(fmou.rbegin(),fmou.rend());
       for(int j=0;j<k;j++){
            ans+=reward1[fmou[j][1]];
            reward2[fmou[j][1]]=0;
        }
       
        for(int i=0;i<reward2.size();i++){
             ans+=reward2[i];
        }
      
      return ans;

    }
};