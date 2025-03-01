// my approach with O(n) O(n)
class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            int n = nums.size();
            vector<int> answer(n, 0); 
            int k = 0;         
            
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0) continue; 
                
                if (i < n - 1 && nums[i] == nums[i + 1]) { 
                    answer[k++] = nums[i] * 2; 
                    nums[i + 1] = 0; 
                } else {
                    answer[k++] = nums[i]; 
                }
            }
            
            return answer;
        }
    };

// optimal approach using two pointer to avoid extra space O(n) O(1)

class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            int n = nums.size();
    
          
            for (int i = 0; i < n - 1; i++) {
                if (nums[i] == nums[i + 1]) {
                    nums[i] *= 2;
                    nums[i + 1] = 0;
                }
            }
            int j = 0; 
            for (int i = 0; i < n; i++) {
                if (nums[i] != 0) {
                    swap(nums[j], nums[i]);
                    j++; 
                }
            }
    
            return nums;
        }
    };
    