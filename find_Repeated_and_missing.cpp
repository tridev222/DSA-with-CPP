class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
             int n = grid.size();
        long long total_n2 = (long long)n * n;  
        long long expected_sum = (total_n2 * (total_n2 + 1)) / 2;
        long long expected_sum_sq = (total_n2 * (total_n2 + 1) * (2 * total_n2 + 1)) / 6;
    
        long long actual_sum = 0, actual_sum_sq = 0;
        for (const auto& row : grid) {
            for (int num : row) {
                actual_sum += num;
                actual_sum_sq += (long long)num * num; 
            }
        }
    
        long long diff = actual_sum - expected_sum; 
        long long sum_sq_diff = actual_sum_sq - expected_sum_sq; 
        long long sum_xy = sum_sq_diff / diff; 
        int y = (diff + sum_xy) / 2;
        int x = sum_xy - y;
    
        return {y, x};
        }
    };