class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int,int> mp;
        const long long mod = 1000000007;

        for(auto& p:points)   mp[p[1]]++;

        long long ans=0;
        long long totaledges=0;

        for(auto& i:mp){
            long long num=i.second;
            long long edges = (num * (num - 1)) / 2;

            ans = (ans + (totaledges * edges) % mod) % mod;
            totaledges = (totaledges + edges) % mod;
        }
        return ans;
    }
};