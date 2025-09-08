class Solution {
public:

    bool isnonzero(int num) {
    while (num > 0) {
        if (num % 10 == 0) return false;
        num /= 10;   
    }
    return true;
    }


    vector<int> getNoZeroIntegers(int n) {
        for(int a=1;a<n;a++){
            int b=n-a;
            if(isnonzero(a) && isnonzero(b)){
                return {a,b};
            }
        }
        return {};
    }
};