class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int missing = -1, repeat = -1;
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                freq[grid[i][j]]++;
            }
        }

        for (int i = 1; i <= n * n; i++) {
            if (freq[i] == 2) {
                repeat = i;
            } else if (freq[i] == 0) {
                missing = i;
            }
        }

        return {repeat, missing};
    }
};
