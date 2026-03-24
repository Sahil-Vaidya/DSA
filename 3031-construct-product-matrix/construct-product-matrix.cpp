class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int MOD=12345;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> pr(n,vector<int>(m));

        long long suffix=1;

        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                pr[i][j]=suffix;
                suffix=(suffix*grid[i][j])%MOD;
            }
        }

        long long prefix=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                pr[i][j]=(prefix*pr[i][j])%MOD; //prefix*suffix
                prefix=(prefix*grid[i][j])%MOD;

            }
        }
        return pr;
    }
};