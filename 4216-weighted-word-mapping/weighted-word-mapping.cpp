class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;
        for(auto& word:words){
            int sum=0;
            for(char c:word){
                sum+=weights[c-'a'];
            }
            int val=sum%26;
            //int revser ordere
            ans.push_back(char('z'-val));
        }
        return ans;
    }
};