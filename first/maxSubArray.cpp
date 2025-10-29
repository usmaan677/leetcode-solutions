class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            if(nums.size()==1){
                return nums[0];
            }
            int cur =nums[0];
            int maxSum = nums[0];
    
    
            for(int i=1;i<nums.size();i++){
                cur = max(nums[i], cur + nums[i]);
                maxSum = max(maxSum, cur);
            }
            return maxSum;
        }