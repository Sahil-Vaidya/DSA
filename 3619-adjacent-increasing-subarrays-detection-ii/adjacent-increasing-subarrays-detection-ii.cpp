class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        int prevRun=0,currRun=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                currRun++;
            }else{//streak break
                prevRun=currRun;
                currRun=1;
            }

            k=max(k,currRun/2);
            k=max(k,min(currRun,prevRun));
        }
        return k;
    }
};