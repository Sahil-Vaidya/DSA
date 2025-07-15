class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3) return false;

        bool isvowel = false;
        bool iscons = false;

        for (char ch : word) {
            if (isalpha(ch)) {
                ch = tolower(ch);  
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    isvowel = true;
                } else {
                    iscons = true;
                }
            } else if (!isdigit(ch)) {
                return false;  
            }
        }

        return isvowel && iscons;
    }
};
