class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans=0;
        for(auto& num:nums) mp[num]++;

        for(auto& num:nums){
            int minn=num;
            int maxn=minn+1;

            if(mp.count(maxn)){
                ans=max(ans,mp[minn]+mp[maxn]);
            }
        }
        return ans;
    }
};