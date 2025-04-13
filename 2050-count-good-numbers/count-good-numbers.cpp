class Solution {
public:
const int M = 1e9 + 7;

long long find(long long a, long long b) {
    if (b == 0) return 1;

    long long half = find(a, b / 2);
    long long result = (half * half) % M;

    if (b % 2 == 1) {
        result = (result * a) % M;
    }

    return result;
}

int countGoodNumbers(long long n) {
    long long evenPos = find(5, (n + 1) / 2);
    long long oddPos = find(4, n / 2);
    return (evenPos * oddPos) % M; 
}
};