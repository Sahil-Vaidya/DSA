class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int min=nums[0];
        int partition=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-min>k){
                partition++;
                min=nums[i];
            }
        }
        return partition;
    }
};