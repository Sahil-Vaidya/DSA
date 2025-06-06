class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1; 
        int n = nums.size();

        // Step 1: Find the pivot 
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }

        // Step 2: If no pivot
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find next greater element 
        for (int i = n - 1; i > pivot; i--) {
            if (nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        // Step 4: Reverse 
        int start = pivot + 1;
        int end = nums.size() - 1;

        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }

    }
};
