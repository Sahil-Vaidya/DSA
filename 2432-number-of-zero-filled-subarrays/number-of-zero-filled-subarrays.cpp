class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        int i=0,n=nums.size();

        while(i<n){
            long long len=0;

            if(nums[i]==0){
                while(i<n && nums[i]==0){
                    i++;
                    len++;
                }
            }else{
                i++;
            }
            ans+=len*(len+1)/2;
        }
        return ans;
    }
};