class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> ans(n - k + 1, vector<int>(m - k + 1));

        for(int i = 0; i <= n - k; i++) {
            for(int j = 0; j <= m - k; j++) {
                set<int> st;

                for(int r = i; r < i + k; r++) {
                    for(int c = j; c < j + k; c++) {
                        st.insert(grid[r][c]);
                    }
                }

                if(st.size() <= 1) {
                    ans[i][j] = 0;
                    continue;
                }

                int mindiff = INT_MAX;
                auto prev = st.begin();
                auto curr = next(prev);

                while(curr != st.end()) {
                    mindiff = min(mindiff, *curr - *prev);
                    prev = curr;
                    curr++;
                }

                ans[i][j] = mindiff;
            }
        }
        return ans;
    }
};