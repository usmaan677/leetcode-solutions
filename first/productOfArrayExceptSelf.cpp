class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            vector <int> res (nums.size(),1);
            int mult =1;
    
            for(int i=0;i<nums.size();i++){
                res[i] = mult*res[i];
                mult *= nums[i];
            }
            mult =1;
            for(int i=nums.size()-1;i>=0;i--){
                res[i] = mult*res[i];
                mult *= nums[i];
            }
            return res;
        }
    };