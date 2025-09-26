class Solution {
public:
    bool solve(string& s, unordered_set<string> &st, int i, vector<int> &dp) {
        if (i == s.size()) return true;

        if (dp[i] != -1) return dp[i];  // already computed

        string temp = "";
        for (int j = i; j < s.size(); j++) {
            temp += s[j];
            if (st.find(temp) != st.end()) {
                if (solve(s, st, j + 1, dp)) 
                    return dp[i] = true;
            }
        }
        return dp[i] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<int> dp(n + 1, -1);
        unordered_set<string> st(wordDict.begin(), wordDict.end());
        return solve(s, st, 0, dp);
    }
};