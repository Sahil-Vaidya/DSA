class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<int,int> ml,mu;
        for(auto& c:word){
            if(c>='a' && c<='z')
                ml[c-'a']++;
            else    mu[c-'A']++;
        }

        int cnt=0;
        //now check if both lower upper char freq greater than 0 then inc cnt
        for(int i=0;i<26;i++){
            if(ml[i]>0 && mu[i]>0)  cnt++;
        }
        return cnt;
    }
};