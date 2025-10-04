class Solution {
public:

    void solve(vector<int>& candidates, int target,int i, vector<vector<int>> &ans,vector<int> curr){
        if(target==0){
            ans.push_back(curr);
            return;
        }

        for(int j=i;j<candidates.size();j++){
            if(candidates[i]>target)    break;
            curr.push_back(candidates[j]);                     
            solve(candidates, target - candidates[j], j, ans, curr); 
            curr.pop_back();
        }

    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> curr;
        solve(candidates,target,0,ans,curr);
        return ans;
    }
};