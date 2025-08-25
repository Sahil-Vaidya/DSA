class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        unordered_map<int, vector<int>> mp;

        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                mp[i - j].push_back(mat[i][j]);
            }
        }

        // Sort each diagonal descending (so we can pop_back easily)
        for (auto &d : mp) {
            sort(d.second.begin(), d.second.end(), greater<int>());
        }

        // Refill matrix (top-left → bottom-right)
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                mat[i][j] = mp[i - j].back();
                mp[i - j].pop_back();
            }
        }

        return mat;
    }
};