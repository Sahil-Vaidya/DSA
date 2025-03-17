class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int> mp;
        int n =nums.size();
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        
        for(auto i:mp)
            if(i.second%2==1)  
                return false;
        
        return true;
    }
};