class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int l, int r) {
        int i=0,j=0,m=0,cnt=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]>r){
                m=0;
                i=j+1;
            }else if(nums[j]>=l && nums[j]<=r){
                m=j-i+1;
            }
            cnt +=m;
            j++;
        }
        return cnt;
    }
};