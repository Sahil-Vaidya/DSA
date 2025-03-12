class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int pcnt=0,ncnt=0,ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ncnt++;
            }else if(nums[i]>0){
                pcnt++;
            }
            ans=max(ncnt,pcnt);
        }
        return ans;
    }
};