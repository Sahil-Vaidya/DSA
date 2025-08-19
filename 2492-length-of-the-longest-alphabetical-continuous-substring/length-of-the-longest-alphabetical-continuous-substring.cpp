class Solution {
public:
    int longestContinuousSubstring(string s) {
        int cnt=1,n=s.size();
        for(int i=0;i<n;i++){
            int len=1;
            while(i<n-1 && s[i+1]-s[i]==1){
                i++;
                len++;
            }
            cnt=max(cnt,len);
        }
        return cnt;
    }
};