class Solution {
public:
    vector<string> keys = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    
    void solve(vector<int> &arr, int n, string temp, int i) {
        if (i == n) {
            ans.push_back(temp);
            return;
        }
        
        for (int j = 0; j < keys[arr[i]].size(); j++) {
            solve(arr, n, temp + keys[arr[i]][j], i + 1);
        }
    }
    
    vector<string> possibleWords(vector<int> &arr) {
        int n = arr.size();
        if (n == 0) return {};
        solve(arr, n, "", 0);
        return ans;
    }
    
    vector<string> letterCombinations(string digits) {
        // Clear previous results
        ans.clear();
        
        if (digits.empty()) return {};
        
        // Convert string digits to vector<int>
        vector<int> arr;
        for (char c : digits) {
            arr.push_back(c - '0'); 
        }
        
        return possibleWords(arr);
    }
};