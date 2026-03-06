class Solution {
public:
    bool checkOnesSegment(string s) {
        //return s.find("01")==string::npos;

        int n=s.length();
        int cnt=0;
        int i=0;
        while(i<n){
            if(s[i]=='1'){
                cnt++;
                while(i<n && s[i]=='1'){
                    i++;
                }
            }else{
                i++;
            }
        if(cnt>1)   return false;
        }
        return true;
    }
};