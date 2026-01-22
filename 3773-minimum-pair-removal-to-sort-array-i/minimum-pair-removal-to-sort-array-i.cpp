class Solution {
public:
    bool isSorted(const vector<int>& v) {
        for (int i = 0; i < (int)v.size() - 1; i++) {
            if (v[i] > v[i + 1]) {
                return false;
            }
        }
        return true;
    }

    int minPairIndex(const vector<int>& arr) {
        int minSum = INT_MAX;
        int idx = -1;

        for (int i = 0; i < (int)arr.size() - 1; i++) {
            if (arr[i] + arr[i + 1] < minSum) {
                minSum = arr[i] + arr[i + 1];
                idx = i;
            }
        }
        return idx;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int cnt=0;
        
        while(!isSorted(nums)){
            int idx=minPairIndex(nums);

            int sum=nums[idx]+nums[idx+1];
            nums.erase(nums.begin() + idx, nums.begin() + idx + 2);
            nums.insert(nums.begin()+idx,sum);
            cnt++;
        }

        return cnt;
    }
};