class Solution {
public:
    bool isvowel(char c){
        return (c=='A' || c=='E' || c=='I' || c=='O' ||
        c=='U' || c=='a' || c=='e' || c=='i' || c=='o' ||
        c=='u');
    }

    string sortVowels(string s) {
        unordered_map<char,int> cnt;

        for(char c:s){
            if(isvowel(c)){
                cnt[c]++;
            }
        }

        string reqVowel="AEIOUaeiou";
        string ans=s;//just to replace char
        int j=0;
        for(int i=0;i<s.length();i++){
            if(!isvowel(s[i]))  continue;
            while(cnt[reqVowel[j]]==0){
                j++;
            }

            ans[i]=reqVowel[j];//replace
            cnt[reqVowel[j]]--;
        }
        return ans;
    }
};