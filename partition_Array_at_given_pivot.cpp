class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            int n = nums.size();
            vector<int> result(n);
            int left = 0, right = n - 1, countPivot = 0;
    
            
            for (int i = 0; i < n; i++) {
                if (nums[i] < pivot) {
                    result[left++] = nums[i]; 
                }
                if (nums[n - 1 - i] > pivot) {
                    result[right--] = nums[n - 1 - i];  
                }
                if (nums[i] == pivot) {
                    countPivot++; 
                }
            }

            while (countPivot--) {
                result[left++] = pivot;
            }
    
            return result;
        }
    };
    