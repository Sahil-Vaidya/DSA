class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxp=nums[0],minp=nums[0],result=nums[0];
        int n=nums.size();
        if(n==0)    return 0;

        for(int i=1;i<n;i++){
            if (nums[i] < 0) swap(maxp, minp);
            maxp = max(nums[i],maxp*nums[i]);
            minp= min(nums[i],minp*nums[i]);

            result=max(result,maxp);
        }
        return result;
    }
};
