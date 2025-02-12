class Solution {
public:
    int sumofdigit(int num) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> digitsummp;
        int maxsum=-1;
        for(int num:nums){
            int digitsum = sumofdigit(num);
            //check if digit already exist
            if(digitsummp.count(digitsum)){
                maxsum = max(maxsum , num + digitsummp[digitsum]);
            }
            //update
            digitsummp[digitsum] = max(digitsummp[digitsum],num);
        }
        return maxsum;
    }
};