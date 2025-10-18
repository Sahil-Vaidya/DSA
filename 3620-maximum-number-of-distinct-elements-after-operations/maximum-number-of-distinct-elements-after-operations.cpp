class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int dcnt=0,prevmax=INT_MIN;
        for(int num:nums){
            int lowerBound=num-k;
            int upperBound=num+k;

            if(prevmax<lowerBound){
                prevmax=lowerBound;
                dcnt++;
            }else if(prevmax<upperBound){
                prevmax++;
                dcnt++;
            }
        }
        return dcnt;
    }
};