class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int i=0,n=nums.size(),maxlen=0,bitmask=0;
        for(int j=0;j<n;j++){
            while((bitmask & nums[j])!=0){
                bitmask = bitmask ^ nums[i];
                i++;//shrink
            }

            bitmask = bitmask | nums[j];
            maxlen = max(maxlen, j-i+1);
        }
    return maxlen;
    }
};