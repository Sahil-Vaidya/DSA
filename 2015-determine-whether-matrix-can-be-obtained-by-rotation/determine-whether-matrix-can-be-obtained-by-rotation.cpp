class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //reverse each row
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }

    bool isEqual(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] != target[i][j])
                    return false;
            }
        }
        return true;
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int c = 0; c < 4; c++) {
            if(isEqual(mat, target))
                return true;
            rotate(mat);
        }
        return false;
    }
};