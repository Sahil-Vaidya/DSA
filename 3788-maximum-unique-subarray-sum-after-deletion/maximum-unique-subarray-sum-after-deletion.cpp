class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> st;
        int sum=0;
        int Maxneg=INT_MIN;
        for(auto& num:nums){
            if(num<=0){
                Maxneg=max(Maxneg,num);
            }else if(!st.count(num)){//if num not in st
                sum+=num;
                st.insert(num);
            }
        }
        return sum==0 ? Maxneg : sum;
    }
};