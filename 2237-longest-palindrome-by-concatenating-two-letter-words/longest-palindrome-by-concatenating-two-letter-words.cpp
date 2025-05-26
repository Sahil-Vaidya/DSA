class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> mp;
        int result = 0;
        bool hasMiddle = false;

        for (auto &word : words) {
            string rev = word;
            swap(rev[0], rev[1]);

            if (mp[rev] > 0) {
                result += 4;
                mp[rev]--;
            } else {
                mp[word]++;
            }
        }

        // Use at most one same-letter pair in the middle
        for (auto &i : mp) {
            string w = i.first;
            int freq = i.second;
            if (w[0] == w[1] && freq > 0) {
                result += 2;
                break; // only one can be in the center
            }
        }

        return result;
    }
};
