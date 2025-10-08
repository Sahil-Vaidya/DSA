class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> ans;
        for(auto& i:spells){
            long positionneed=(success + i - 1)/ i;
            auto it = lower_bound(potions.begin(),potions.end(),positionneed);
            ans.push_back(potions.end() - it);
        }
        return ans;
    }
};