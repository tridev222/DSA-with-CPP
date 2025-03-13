int knapsackTabulation(int W, int wt[], int val[], int n) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    // Fill DP Table
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            if (wt[i-1] > w) // If current item is too heavy
                dp[i][w] = dp[i-1][w];
            else
                dp[i][w] = max(dp[i-1][w], dp[i-1][w - wt[i-1]] + val[i-1]);
        }
    }
    return dp[n][W];  // Final answer in bottom-right corner
}
