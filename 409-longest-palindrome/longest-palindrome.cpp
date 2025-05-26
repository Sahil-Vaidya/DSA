class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.length();
        unordered_map<char,int> mp;
        int oddcnt=0;
        for(auto &ch:s){
            mp[ch]++;

            if(mp[ch]%2!=0){
                oddcnt++;
            }else{
                oddcnt--;
            }
        }

        if(oddcnt>0){
            return n - oddcnt +1;
        }

        return n;
    }
};