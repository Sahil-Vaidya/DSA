class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        //first inc
        int i=1;
        int n=nums.size();
        while(i<n && nums[i]>nums[i-1]){
            i++;
        }
        if(i==1 || i==n)    return false;

        //sec dec
        while(i<n && nums[i]<nums[i-1]){
            i++;
        }
        if(i==n)    return false;

        //n-1 inc
        while(i<n && nums[i]>nums[i-1]){
            i++;
        }
        return (i==n) ? true : false;
    }
};