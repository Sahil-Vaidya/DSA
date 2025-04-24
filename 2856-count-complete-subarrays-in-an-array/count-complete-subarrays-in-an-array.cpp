class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st(nums.begin(), nums.end());
        int totalUnique = st.size();
        
        int result = 0;
        unordered_map<int, int> mp;
        int i = 0;
        
        for(int j = 0; j < n; ++j) {
            mp[nums[j]]++;
            
            while(mp.size() == totalUnique) {
                result += (n - j);
                
                mp[nums[i]]--;
                if(mp[nums[i]] == 0) {
                    mp.erase(nums[i]);
                }
                i++;
            }
        }
        
        return result;
    }
};