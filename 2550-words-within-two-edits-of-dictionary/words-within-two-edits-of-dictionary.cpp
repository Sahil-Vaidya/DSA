class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int n=queries.size();
        int m=dictionary.size();
        vector<string> ans;
        for(int i=0;i<n;i++){
            string s=queries[i];
            for(int j=0;j<m;j++){
                int diff=0;
                string t=dictionary[j];

                    for(int k=0;k<t.size();k++){
                        if(s[k]!=t[k]){
                            diff++;
                        }
                    }
                    if(diff<3){
                        ans.push_back(s);
                        break;
                    }
            }
        }
        return ans;
    }
};