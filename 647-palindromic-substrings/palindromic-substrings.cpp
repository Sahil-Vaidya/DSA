class Solution {
public:
    int isPalindrome(string &s, int left, int right) {
        int cnt = 0;
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            cnt++;
            left--;
            right++;
        }
        return cnt;
    }
    int countSubstrings(string s) {
        int n=s.length(), cnt=0;
        for(int i=0;i<n;i++){
            cnt+=isPalindrome(s,i,i);
            cnt+=isPalindrome(s,i,i+1);
        }
        return cnt;
    }
};