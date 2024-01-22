class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        //1 2 3 0 5 6
        vector<int> arr(n + 1, 0);
        vector<int> vec;

        for (auto i: nums)
        {
            arr[i]++;
        }

        for (int i = 1; i < n + 1; i++)
        {
            if (arr[i] > 1)
                vec.push_back(i);
        }
        for (int i = 1; i < n + 1; i++)
        {
            if (arr[i] == 0)
                vec.push_back(i);
        }
        return vec;
    }
};