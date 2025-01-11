class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k)  return false;
        unordered_map<char,int> freq;
        for(char c:s) freq[c]++;

        int cnt=0;
        for(auto p:freq){
            if(p.second%2!=0)
                cnt++;
        }
        return cnt<=k;
    }
};