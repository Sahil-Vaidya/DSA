class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long maxi=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    int sum=nums[i]-nums[j];
                    if(sum>0){
                        maxi=max(maxi,(long long)(nums[i]-nums[j])*nums[k]);
                    }
                }
            }
        }
        return maxi > 0 ? maxi :0; 
    }
};