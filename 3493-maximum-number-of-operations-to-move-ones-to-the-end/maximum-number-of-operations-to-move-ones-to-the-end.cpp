class Solution {
public:
    int maxOperations(string s) {
        int cntones=0, ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '1')
                cntones++;
            else if(i>0 && s[i-1]=='1')
                ans+=cntones;
        }
        return ans;
    }
};