class Solution {
public:
    bool check(string a, string b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        return a == b;
    }

    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        ans.push_back(words[0]);

        for (int i = 1; i < words.size(); i++) {
            
            if (!check(words[i], ans.back())) {
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};
