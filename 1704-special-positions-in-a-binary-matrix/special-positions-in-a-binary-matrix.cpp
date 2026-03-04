class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int ans=0;
        
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(mat[row][col]==0)    continue;

                bool good=true; 
                for(int r=0;r<n;r++){
                    if(r!=row && mat[r][col]==1){
                        good=false;
                        break;
                    }
                }

                for(int c=0;c<m;c++){
                    if(c!=col && mat[row][c]==1){
                        good=false;
                        break;
                    }
                }

                if(good)    ans++;
            }
        }
        return ans;
    }
};