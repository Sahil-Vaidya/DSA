class Solution {
public:
    long long coloredCells(int n) {
        long long ans = 1;
        long long val = 4;
        if(n==1)  return 1;

        for(int i=2;i<=n;i++){
            ans +=val;
            val = 4 * i;
        }
        return ans;
    }
};