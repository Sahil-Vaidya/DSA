class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        int n=nums.size();
        vector<int> ans(n);
        int left=0,right=n-1;
        for(int i=0,j=n-1;i<n;i++,j--){
            if(nums[i]<pivot)
                ans[left++] = nums[i];
            if(nums[j]>pivot)
                ans[right--]=nums[j];
        }

        while(left<=right){
            ans[left++]= pivot;
        }
        return ans;

    }
};




        // vector<int> less,equal,greater;

        // for(int n:nums){
        //     if(n<pivot){
        //         less.push_back(n);
        //     }else if(n == pivot){
        //         equal.push_back(n);
        //     }else{
        //         greater.push_back(n);
        //     }
        // }

        // //to concatinate
        // vector<int> ans;
        // ans.reserve(nums.size());//ans of same size
        // for(int num:less)  ans.push_back(num);
        // for(int num:equal)  ans.push_back(num);
        // for(int num:greater)   ans.push_back(num);

        // return ans;

//     }
// };