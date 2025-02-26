class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            int prefix = 1, suffix = 1 , n = nums.size();
            int max_product = INT_MIN;
            for(int i = 0 ; i < n; i++){
                if(prefix == 0 ) prefix = 1;
                if(suffix == 0 ) suffix = 1;
                prefix = prefix * nums[i];
                suffix = suffix * nums[n - i - 1];
                max_product = max(max_product , max(prefix, suffix));
            }
            return max_product;
        }
    };