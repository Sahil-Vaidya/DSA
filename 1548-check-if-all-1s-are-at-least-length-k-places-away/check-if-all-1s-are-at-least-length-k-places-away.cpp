class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int cnt=0;
        bool prev=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(prev && cnt<k)   return false;
                cnt=0;
                prev=true;
            }else{
                if(prev)
                    cnt++;
            }
        }
        return true;
    }
};