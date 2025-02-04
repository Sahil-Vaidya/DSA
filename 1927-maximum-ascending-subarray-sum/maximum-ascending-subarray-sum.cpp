class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1)   return nums[0];
        int maxsum=nums[0];
        int currsum=nums[0];

        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                currsum += nums[i];
            }else{
                maxsum = max(maxsum,currsum);
                currsum=nums[i];
            }
        }
        return max(currsum,maxsum);
    }
};