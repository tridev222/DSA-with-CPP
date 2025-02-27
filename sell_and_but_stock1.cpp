class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int mini = prices[0], maxi = 0, n = prices.size();
            for(int i = 0; i < n; i++){
                int cost = prices[i] - mini;
                maxi = max(maxi, cost);
                mini = min(mini , prices[i]);
            }
            return maxi;
        }
    };