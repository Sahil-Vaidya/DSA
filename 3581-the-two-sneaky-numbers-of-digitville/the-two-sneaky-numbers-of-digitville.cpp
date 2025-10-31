class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> result;
        for(int num:nums){
            mp[num]++;
            if(mp[num]==2){
                result.push_back(num);
            }
        }
        return result;
    }
};