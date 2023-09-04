class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        //vector_name.insert(vector_name.begin() + 1, 500);
        vector<int> target;
        for(int i=0;i<index.size();i++){
           
           target.insert(target.begin()+index[i],nums[i]);
        }
        return target;
    }
};