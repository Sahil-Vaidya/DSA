class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> check;
        for(int i=n-1;i>=0;i--){
            if(check.count(nums[i]))
                return i/3 + 1;
            check.insert(nums[i]);
        }
        return 0;
    }
};