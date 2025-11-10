class Solution {
public:
    int minOperations(vector<int>& nums) {
        stack<int> st;
        int cnt=0;
        for(int num:nums){
            while(!st.empty() && st.top()>num){
                st.pop();//remove larger ele present in midle
            }

            if(st.empty() || st.top()<num){
                if(num!=0)  cnt++;
                st.push(num);
            }
        }
        return cnt;
    }
};