class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]<nums[j] && nums[k]<nums[j]){
                        mini = min(mini,nums[i]+nums[j]+nums[k]);
                    }
                }
            }
        }
        return (mini == INT_MAX) ? -1 :mini;
    }
};