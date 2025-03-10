class Solution {
public:
    bool check(vector<int> vowels){
        for(auto i: vowels){
            if(i==0) return false;
        }
        return true;
    }

    int countVowelSubstrings(string word) {
        vector<int> vowels(5);
        int ans=0;
        int n=word.size();
        for(int i=0;i<n;i++){
            vowels = vector<int>(5,0);
            for(int j=i;j<n;j++){
                if(word[j]=='a')    vowels[0]++;
                else if(word[j]=='e')   vowels[1]++;
                else if(word[j]=='i') vowels[2]++;
                else if(word[j]=='o') vowels[3]++;
                else if(word[j]=='u') vowels[4]++;
                else break;

                if(check(vowels)) ans++;
            }
        }
        return ans;
    }
};