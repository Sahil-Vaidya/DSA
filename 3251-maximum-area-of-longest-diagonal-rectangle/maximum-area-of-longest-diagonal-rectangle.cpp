class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n=dimensions.size();

        int maxdia=0;
        int maxarea=0;

        for(int i=0;i<n;i++){
            int l=dimensions[i][0];
            int w=dimensions[i][1];

            int currdia=l*l + w*w;
            int area= l*w;

            if(currdia > maxdia){
                maxdia=currdia;
                maxarea=area;
            }else if(currdia == maxdia){
                maxarea=max(maxarea,area);
            }
        }
        return maxarea;
    }
};