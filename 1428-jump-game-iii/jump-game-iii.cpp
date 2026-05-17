class Solution {
public:
    vector<bool> visited;

    bool dfs(vector<int>& arr, int idx) {
        if (idx < 0 || idx >= arr.size() || visited[idx])
            return false;

        // start value 0
        if (arr[idx] == 0)
            return true;

        visited[idx] = true;

        return dfs(arr, idx + arr[idx]) ||
               dfs(arr, idx - arr[idx]);
    }

    bool canReach(vector<int>& arr, int start) {
        visited.resize(arr.size(), false);

        return dfs(arr, start);
    }
};