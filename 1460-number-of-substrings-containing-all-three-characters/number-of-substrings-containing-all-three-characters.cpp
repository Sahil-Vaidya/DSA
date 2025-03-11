class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0,r=0, validsubstr=0;
        vector<int> freq(3,0);
        while(r < s.size()){
            freq[s[r]-'a']++;
        
        while(freq[0] && freq[1] && freq[2]){
            validsubstr += s.size()-r;
            freq[s[l++]-'a']--;//freq
        }
        r++;
        }
        return validsubstr;
    }
};