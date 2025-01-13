class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        int ans=0;
        for(auto a:mp){
            int cnt=a.second;
            while(cnt>=3){
                cnt-=2;
            }
            ans +=cnt;
        }
        return ans;
    }
};