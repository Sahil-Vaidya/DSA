class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> idx;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                idx.push_back(i);
            }

            if(idx.size()>2)    return false;
        }

        if(idx.empty()) return true;

        if(idx.size()==2){
            int i=idx[0];
            int j=idx[1];
            return s1[i] == s2[j] && s1[j]==s2[i];
        }

        return false;
    }
};