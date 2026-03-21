class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int n=grid.size(),m=grid[0].size();
        int top=x,bottom=x+k-1;

        while(top<bottom){
            for(int j=y;j<y+k;j++){
                int temp=grid[top][j];
                grid[top][j]=grid[bottom][j];
                grid[bottom][j]=temp;
            }
            top++;
            bottom--;
        }
        return grid;

    }
};