class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int negcnt=0;
        for(int i=0;i<grid.size();i++){
            int negno = upper_bound(grid[i].rbegin(),grid[i].rend(),-1)-grid[i].rbegin();
            negcnt +=negno;
        }
        return negcnt;
    }
};