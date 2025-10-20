class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X=0;
        for (string op : operations) {
        if (op == "++X" || op == "X++") {
            X = X + 1;  
        } else {
            X = X - 1;  
        }
    }
    return X;
    }
};