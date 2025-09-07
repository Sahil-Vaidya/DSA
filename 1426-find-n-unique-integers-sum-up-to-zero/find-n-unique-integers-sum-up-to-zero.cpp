class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n);
        int start=1;
        int i=0;
        int j=n-1;
        while(i<j){
            ans[i]=start;
            ans[j]=-start;

            start++;
            i++;
            j--;
        }
        return ans;
    }
};