class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int result = 0, prefixsum = 0, evencnt = 1, oddcnt = 0;

        for (int num : arr) {
            prefixsum += num;

            if (prefixsum % 2 == 0) { 
                result = (result + oddcnt) % MOD;
                evencnt++;
            } else { 
                result = (result + evencnt) % MOD;
                oddcnt++;
            }
        }
        return result;
    }
};
