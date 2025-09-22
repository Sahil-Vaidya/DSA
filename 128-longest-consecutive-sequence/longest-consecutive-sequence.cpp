class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int maxlen=0;
        for(int num:s){
            if(s.find(num-1)==s.end()){
                int curr=num;
                int cnt=0;

                while(s.find(curr)!=s.end()){
                    cnt++;
                    curr++;
                }
                maxlen=max(maxlen,cnt);
            }            
        }
        return maxlen;
    }
};