class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());

        int cnt=0;
        bool hasfound=false;
        for(auto& ch:text){
            if(ch==' '){
                if(!hasfound)  cnt++;
                hasfound=false;
            }else{
                if(broken.count(ch)){
                    hasfound=true;
                }
            }

        }
        if(!hasfound)  cnt++;
        return cnt;
    }
};