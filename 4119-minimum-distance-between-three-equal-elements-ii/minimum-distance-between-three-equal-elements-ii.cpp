class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>> mp;
        int ans=INT_MAX;
        for(int k=0;k<n;k++){
            mp[nums[k]].push_back(k);

            if(mp[nums[k]].size()>=3){
                vector<int>& v=mp[nums[k]];
                int size=v.size();
                int i=v[size-3];

                ans=min(ans,2*(k-i));
            }
        }
        if(ans==INT_MAX)    return -1;
        return ans;
    }
};