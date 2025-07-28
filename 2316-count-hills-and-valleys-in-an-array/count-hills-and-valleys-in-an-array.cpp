class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int i=0,j=1,cnt=0,n=nums.size();
        while(j+1<n){
            if((nums[i]<nums[j] && nums[j]>nums[j+1]) ||
                (nums[i]>nums[j] && nums[j]<nums[j+1]) ){
                    cnt++;
                    i=j;
                }
            j++;
        }
        return cnt;
    }
};