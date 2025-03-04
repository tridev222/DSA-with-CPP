class Solution {
    public:
        int coinChange(vector<int>& coins, int amount) {
            int n = coins.size();
            vector<vector<int>> dp(n, vector<int>(amount + 1, 1e9));
            
            
            for (int T = 0; T <= amount; T++) {
                if (T % coins[0] == 0) 
                    dp[0][T] = T / coins[0];
            }
    
            for (int ind = 1; ind < n; ind++) {
                for (int T = 0; T <= amount; T++) {
                    int notTake = dp[ind - 1][T];
                    int take = 1e9;
                    if (coins[ind] <= T) {
                        take = 1 + dp[ind][T - coins[ind]];
                    }
                    dp[ind][T] = min(take, notTake);
                }
            }
    
            int ans = dp[n - 1][amount];
            return (ans >= 1e9) ? -1 : ans;
        }
    };
    