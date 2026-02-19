class Solution {
public:
    int countBinarySubstrings(string s) {
        int result=0;
        int currcnt=1,prevcnt=0;
        int n=s.size();
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                currcnt+=1;
            }else{
                result+=min(currcnt,prevcnt);
                prevcnt=currcnt;
                currcnt=1;
            }
        }
        return result+min(currcnt,prevcnt);
    }
};