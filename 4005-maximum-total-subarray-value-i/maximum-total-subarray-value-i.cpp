class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int mini=INT_MAX,maxi=INT_MIN;
        long long diff=0;
        for(auto& num:nums){
            maxi=max(maxi,num);
            mini=min(mini,num);
        }
        diff=maxi-mini;
        return k*diff;
    }
};