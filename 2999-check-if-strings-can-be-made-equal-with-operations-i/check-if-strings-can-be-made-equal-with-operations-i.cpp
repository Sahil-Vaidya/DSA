class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int n=s1.size();
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                bool swaped=false;
                for(int j=i+1;j<n;j++){
                    if (s2[j] == s1[i] && (j - i) == 2){
                        swap(s2[i],s2[j]);
                        swaped=true;
                        break;
                    }
                }
                if(!swaped) return false;
            }
        }
        return s1==s2;
    }
};