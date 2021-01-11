class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        int xint = 0;
        for(int i=0; i<n; i++){
            nums[i] = start + 2*i;
            xint  = xint^nums[i];   
        }
        return xint;
        
    }
};
