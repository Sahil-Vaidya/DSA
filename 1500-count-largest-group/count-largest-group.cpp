class Solution {
public:
    int finddigitsum(int n){
        int sum = 0;
        while(n != 0){
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        int cnt = 0, maxsize = 0;

        for(int i = 1; i <= n; i++){
            int digitsum = finddigitsum(i);
            mp[digitsum]++;

            if(mp[digitsum] == maxsize){
                cnt++;
            } else if(mp[digitsum] > maxsize){
                maxsize = mp[digitsum];
                cnt = 1;
            }
        }
        return cnt;
    }
};