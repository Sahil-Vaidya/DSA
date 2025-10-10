class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int m=accounts[0].size();
        int maxi=0;

        for(int i=0;i<n;i++){//row
            int total=0;
            for(int j=0;j<m;j++){//col
                total+=accounts[i][j];
            }
            maxi=max(maxi,total);
        }
        return maxi;
    }
};