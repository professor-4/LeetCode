class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if (target<=nums[0]){
            return 0;
        }
        else if(target>nums[n-1]){
            return n;
        }
        else{
            for(int i=0; i< n; i++){
                if (nums[i]==target){
                    return i;
                }
                else if(nums[i]<target&& target< nums[i+1]){
                    return (i+1);
                }
                
    
            }
            
        }
        return 0;
    }
};
