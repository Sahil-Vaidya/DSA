class Solution {
public:
    bool isvowel(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }

    int maxFreqSum(string s) {
        vector<int> cnt(26,0);
        int sum=0;
        for(char c:s){
            cnt[c-'a']++;
        }

        int maxi1=0,maxi2=0;
        for(int i=0;i<26;i++){
            if(isvowel('a'+i)){
                maxi1=max(maxi1,cnt[i]);
            }else{
                maxi2=max(maxi2,cnt[i]);
            }
            sum=maxi1+maxi2;
        }
        return sum;
    }
};