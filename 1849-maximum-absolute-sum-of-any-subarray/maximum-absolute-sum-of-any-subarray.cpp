class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum=0,minno=0,maxno=0;
        for(int n:nums){
            sum += n;//prefix sum
            minno= min(minno,sum);
            maxno = max(maxno,sum);
        }
        return maxno-minno;
    }
};