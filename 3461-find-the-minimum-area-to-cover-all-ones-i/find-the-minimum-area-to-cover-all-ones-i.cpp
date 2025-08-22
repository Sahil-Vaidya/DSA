class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        int minrow=n;
        int maxrow=-1;
        int mincol=m;
        int maxcol=-1;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    minrow=min(minrow,i);
                    maxrow=max(maxrow,i);

                    mincol=min(mincol,j);
                    maxcol=max(maxcol,j);
                }
            }
        }
        int len=maxcol - mincol + 1;
        int hight=maxrow - minrow + 1;
        
        return len*hight;
    }
};