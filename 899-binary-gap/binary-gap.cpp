class Solution {
public:
    int binaryGap(int n) {
        int maxi=0;
        int prev=-1;
        for(int i=0;i<32;i++){
            if((n&1)>0){//if curr ==1
                if(prev==-1)    prev=i;
                else{
                    maxi=max(maxi,i-prev);
                    prev=i;
                }
            }
            n=n>>1;//right shofy
        }
        return maxi;
    }
};