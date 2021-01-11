class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector <int>v;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
                v.push_back(nums[i]);
        }
        return v;
    }
};
