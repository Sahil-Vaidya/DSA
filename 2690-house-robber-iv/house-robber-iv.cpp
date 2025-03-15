#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canrob(vector<int>& nums, int mid, int k) {
        int cnt = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] <= mid) {
                cnt++;
                i++; // i+2
            }
        }
        return cnt >= k;
    }
    
    int minCapability(vector<int>& nums, int k) {
        int left = 1, right = *max_element(nums.begin(), nums.end()), ans = right;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (canrob(nums, mid, k)) {
                ans = mid;
                right = mid - 1; // min
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};
