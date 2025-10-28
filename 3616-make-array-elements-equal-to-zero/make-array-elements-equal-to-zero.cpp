class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int sum = 0;
        for(int x : nums) sum += x;
        
        int n = nums.size();
        int ans = 0;
        int leftsum = 0;
        
        for(int i = 0; i < n; i++) {
            
            if(nums[i] == 0) {
                int rightsum = sum - leftsum;
                
                if(leftsum == rightsum) {
                    ans += 2;
                }
                else if(abs(leftsum - rightsum) == 1) {
                    ans += 1;
                }
            }
            
            leftsum += nums[i]; 
        }
        
        return ans;
    }
};