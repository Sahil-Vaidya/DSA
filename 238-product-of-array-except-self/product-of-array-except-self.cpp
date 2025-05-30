class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zerocnt=0,prod=1,idx=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zerocnt++;
                idx=i;
            }else{
                prod *=nums[i];
            }
        }
        
        vector<int> ans(nums.size(),0);
        if(zerocnt==0){
            for(int i=0;i<nums.size();i++){
                ans[i] = prod/nums[i];
            }
            
        }else if(zerocnt==1){
            ans[idx] = prod;
        }
        
        return ans;
    }
};