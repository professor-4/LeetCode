class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res  = nums[0] ;
        int n = nums.size();
       for(int i = 0; i < n; i++)
	    {
		    int curr = 0;

		    for(int j = i; j < n; j++)
		    {
			    curr = curr +  nums[j];

			    res = max(res, curr);
		    }
	    }
        return res;
    }
};
