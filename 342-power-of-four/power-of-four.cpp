class Solution {
public:
    bool isPowerOfFour(int n) {
    if (n <= 0) return false;

    // Keep dividing by 4 while n is divisible by 4
    while (n % 4 == 0) {
        n /= 4;
    }

    // If we end up with 1, it was a power of four
    return n == 1;
    }
};