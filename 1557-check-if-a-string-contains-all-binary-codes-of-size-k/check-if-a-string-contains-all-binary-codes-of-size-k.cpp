class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int codes = pow(2, k);
        unordered_set<string> st;

        for (int i = k; i <= s.size(); i++) {
            string subs = s.substr(i - k, k);
            if (!st.count(subs)) {
                st.insert(subs);
                codes--;
            }
            if (codes == 0) return true;
        }

        return false;
    }

};