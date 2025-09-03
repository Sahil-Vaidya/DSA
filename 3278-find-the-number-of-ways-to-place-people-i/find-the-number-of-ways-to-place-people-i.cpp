class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n=points.size();
        int ans=0;

        for(int i=0;i<n;i++){
            //find A
            int x1=points[i][0];
            int y1=points[i][1];

            //find b
            for(int j=0;j<n;j++){
                if(i==j)    continue;
                int x2=points[j][0];
                int y2=points[j][1];

                if(x2>=x1 && y2<=y1){
                    //check points lie between A or B
                    bool hasinside=false;
                    for(int k=0;k<n;k++){
                        if(k==i || k==j)    continue;
                        int x3=points[k][0];
                        int y3=points[k][1];

                        if(x3>=x1 && x3<=x2 && y3>=y2 && y3<=y1){
                            hasinside=true;
                            break;
                        }
                    }
                    if(!hasinside){
                        ans++;
                    }
                }
            }
        }    
        return ans;
    }
};