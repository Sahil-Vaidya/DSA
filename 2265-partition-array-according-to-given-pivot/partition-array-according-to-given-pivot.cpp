class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less,equal,greater;

        for(int n:nums){
            if(n<pivot){
                less.push_back(n);
            }else if(n == pivot){
                equal.push_back(n);
            }else{
                greater.push_back(n);
            }
        }

        //to concatinate
        vector<int> ans;
        ans.reserve(nums.size());//ans of same size
        for(int num:less)  ans.push_back(num);
        for(int num:equal)  ans.push_back(num);
        for(int num:greater)   ans.push_back(num);

        return ans;

    }
};