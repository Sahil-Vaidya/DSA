class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int first=0,second=-1,dis=0,n=colors.size();
        for(int i=0;i<n;i++){
            if(colors[i]!=colors[first]){
                dis=max(dis,i-first);
                if(second==-1){
                    second=i;
                }
            }else{//equal
                if(second!=-1){
                    dis=max(dis,i-second);
                }
            }
        }
        return dis;
    }
};