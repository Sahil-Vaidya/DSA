class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int cnt=0;

        for(auto& i:nums){
            cnt+=mp[i+k]+mp[i-k];
            mp[i]++;
        }
    return cnt;
    }
};