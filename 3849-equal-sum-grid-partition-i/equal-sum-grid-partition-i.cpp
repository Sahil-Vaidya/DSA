class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        vector<long long> rowsum(n,0);
        vector<long long> colsum(m,0);

        long long totalsum=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                totalsum+=grid[i][j];
                //rowsum  i
                rowsum[i]+=grid[i][j];
                //colsum j
                colsum[j]+=grid[i][j];
            }
        }

        if(totalsum%2!=0)   return false;// no equal sum or no split

        //horizontal split
        long long upper=0;
        long long lower=0;
        for(int i=0;i<n-1;i++){
            upper+=rowsum[i];
            lower=totalsum-upper;
            if(upper==lower)    return true;
        }


        //verticle split
        long long left=0;
        long long right=0;
        for(int j=0;j<m-1;j++){
            left+=colsum[j];
            right=totalsum-left;
            if(left==right)    return true;
        }

        return false;
    }
};