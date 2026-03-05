class Solution {
public:
    int minOperations(string s) {
        int n=s.length();
        string s1="",s2="";
        int val=0;
        for(int i=0;i<n;i++){
            s1+=(val+'0');//start with 0
            s2+=(!val+'0');//start with 1

            val=!val;//1
        }

        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(s[i]!=s1[i]) cnt1++;
            if(s[i]!=s2[i]) cnt2++;
        }
        return min(cnt1,cnt2);
    }
};