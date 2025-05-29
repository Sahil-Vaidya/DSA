class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum=0,maxlen=0;
        for(int i=0;i<nums.size();i++){
            sum += (nums[i]==0) ? -1: 1;
            if(sum==0)  
                maxlen = i+1;
            
            if(mp.find(sum-0)!=mp.end()){
                maxlen=max(maxlen,i-mp[sum-0]);
            }else{
                mp[sum]=i;
            }
        }
        return maxlen;
    }
};