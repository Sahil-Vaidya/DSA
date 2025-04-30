class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=0,i=0,j=0,n=nums.size();
        long long ans=0;
        unordered_map<int,int> mp;
        for(auto &i:nums)
            maxi=max(maxi,i);

        while(j<n){
            if(nums[j]==maxi)   mp[nums[j]]++;
            while(mp[maxi]>=k){
                ans += (n-j);
                if(nums[i]==maxi)   mp[nums[i]]--;
                i++;
            }
            j++;
        }
        return ans;
    }
};