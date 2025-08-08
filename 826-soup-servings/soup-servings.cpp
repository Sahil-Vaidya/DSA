class Solution {
public:
    vector<pair<int,int>> serve = {{100,0},{75,25},{50,50},{25,75}};

    double solve(int A, int B, vector<vector<double>>& dp) {
        if (A <= 0 && B <= 0) return 0.5;
        if (A <= 0) return 1.0;
        if (B <= 0) return 0.0;

        if (dp[A][B] != -1.0) return dp[A][B];

        double prob = 0.0;
        for (auto& p : serve) {
            prob += solve(max(0, A - p.first), max(0, B - p.second), dp);
        }
        return dp[A][B] = 0.25 * prob;
    }

    double soupServings(int n) {
        if (n > 4800) return 1.0; 
        vector<vector<double>> dp(n + 1, vector<double>(n + 1, -1.0));
        return solve(n, n, dp);
    }
};
