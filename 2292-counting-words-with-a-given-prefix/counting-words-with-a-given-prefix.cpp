class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        for(string w:words){
            if(w.find(pref)==0)
                cnt++;
        }
        return cnt;
    }
};