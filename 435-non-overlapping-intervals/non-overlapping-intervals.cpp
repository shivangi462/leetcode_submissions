class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
         sort(intervals.begin(),intervals.end(),[&](vector<int> v1, vector<int> v2){
            if (v1[1]<v2[1]) return true;
            return false;
        });
        //  1 2
        //  2 3
        //  1 3
        //  3 4
        int l=intervals[0][0],r=intervals[0][1],n=intervals.size(),ans=1;
        for (int i=1;i<n;i++) if (intervals[i][0]>=r) {ans++;r=intervals[i][1];}
        return n-ans;
    }
};