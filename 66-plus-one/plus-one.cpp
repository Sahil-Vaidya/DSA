class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int add = 1;

        for (int i = digits.size() - 1; i >= 0; i--) {
            int sum = digits[i] + add;
            digits[i] = sum % 10;
            add = sum / 10;
        }

        if (add) ans.push_back(add);

        for (int i = 0; i < digits.size(); i++) {
            ans.push_back(digits[i]);
        }

        return ans;

    }
};