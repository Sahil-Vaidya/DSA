class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

        map<int, vector<int>> mp;
        vector<int> ans;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }


        bool flip=true;
        for(auto& i:mp){
            if(flip){
                reverse(i.second.begin(),i.second.end());
            }

            for(auto& it:i.second){
                ans.push_back(it);
            }

            flip=!flip;
        }

        return ans;
    }
};