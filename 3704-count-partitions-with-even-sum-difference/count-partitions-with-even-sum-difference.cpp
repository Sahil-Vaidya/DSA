class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }

        int cnt=0,left=0,right=sum;
        for(int i=0;i<nums.size()-1;i++){
            left +=nums[i];
            right -=nums[i];

            if(abs(left-right)%2==0)
                cnt++;
        }
        return cnt;
    }
};