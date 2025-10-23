class Solution {
public:
    bool hasSameDigits(string s) {
        string temp="";
        while (s.length() > 2) {
        temp = ""; 
        for (int i = 0; i < s.length() - 1; i++) {
            int digit1 = s[i] - '0';
            int digit2 = s[i + 1] - '0';
            int sum = (digit1 + digit2) % 10;
            temp.push_back(sum + '0');
        }
        s = temp; 
    }
    
    return s[0] == s[1];
    }

};