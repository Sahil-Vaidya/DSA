class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1,arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for(int i=2;i<nums.size();i++){
            if(arr1.back()>arr2.back())
                arr1.push_back(nums[i]);
            else
                arr2.push_back(nums[i]);
        }

        int merge=0;
        for(int i=0;i<arr1.size();i++){
            nums[merge] = arr1[i];
            merge++;
        }

        for(int i=0;i<arr2.size();i++){
            nums[merge] = arr2[i];
            merge++;
        }
        return nums;
    }
};