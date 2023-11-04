class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int maxy=0;
        for(auto &it:right){
             maxy= max(maxy,n-it);
        }
        for(auto &it:left){
             maxy= max(maxy,it);
        }
      return maxy;
    }
};