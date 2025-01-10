class Solution {
public:
    vector<int> count(const string &s) {
        vector<int> ans(26, 0);
        for (char c : s) {
            ans[c - 'a']++;
        }
        return ans;
    }

    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> bmax(26, 0);
        for (const string& b : words2) { // Calculate maximum frequency of each character in words2
            vector<int> countb = count(b);
            for (int i = 0; i < 26; i++) {
                bmax[i] = max(bmax[i], countb[i]);
            }
        }

        vector<string> ans;
        for (const string& s : words1) {
            vector<int> counta = count(s);// Calculate maximum frequency of each character in words1
            bool isSubset = true;
            for (int i = 0; i < 26; i++) {
                if (counta[i] < bmax[i]) {
                    isSubset = false;
                    break;
                }
            }
            if (isSubset) {
                ans.push_back(s);
            }
        }
        return ans;
    }
};
