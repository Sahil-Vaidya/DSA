class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),num=1;
        for(int i=0;i<n;i++){
            if(nums[i]==num && nums[i]>=1){
                num++;
            }
        }
        return num;
    }
};