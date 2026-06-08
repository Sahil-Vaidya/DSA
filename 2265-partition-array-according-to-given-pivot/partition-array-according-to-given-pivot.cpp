class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        int left=0,right=n-1;
        vector<int> ans(n);
        //left
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                ans[left++]=nums[i];
            }
        }
        //right
        for(int i=n-1;i>=0;i--){
            if(pivot<nums[i])
                ans[right--]=nums[i];
        }
        //pivot
        while(left<=right){
            ans[left++]=pivot;
        }
        return ans;

    }
};