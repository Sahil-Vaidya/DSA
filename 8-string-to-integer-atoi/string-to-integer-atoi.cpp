class Solution {
public:
    int myAtoi(string s) {
        int sign = 1, ans = 0, i = 0;

        while (i < s.length() && s[i] == ' ')
            i++;

        if (s[i] == '-') {
            sign = -1;
            i++;
        } else if (s[i] == '+') {
            i++;
        }

        while(s[i]>='0' and s[i]<='9'){
            int digit= s[i] - '0';
            if(ans > (INT_MAX-digit)/10){
                return (sign==1) ? INT_MAX :INT_MIN ;
            }

            ans = ans*10 +digit;
            i++;
        }
        return ans * sign;
    }
};