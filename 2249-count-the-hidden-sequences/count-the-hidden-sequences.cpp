class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long sum = 0;
        long long mini = sum, maxi = sum;
        for (int i = 0; i < differences.size(); i++) {
            sum += differences[i];
            mini = min(mini, sum);
            maxi = max(maxi, sum);
        }

        long long low = (long long)lower - mini;
        long long high = (long long)upper - maxi;

        return (high - low + 1) > 0 ? (int)(high - low + 1) : 0;
    }
};
