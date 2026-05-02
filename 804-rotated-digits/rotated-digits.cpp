class Solution {
public:
    bool isgood(int i){
        int num = i;
        bool isvalid = false; 
        
        while(num > 0){
            int rem = num % 10;
            
            if(rem == 3 || rem == 4 || rem == 7){
                return false;
            }
            
            if(rem == 2 || rem == 5 || rem == 6 || rem == 9){
                isvalid = true;
            }
            
            num /= 10; 
        }
        
        return isvalid;
    }

    int rotatedDigits(int n) {
        int cnt = 0;
        for(int i = 1; i <= n; i++){ 
            if(isgood(i)) cnt++;
        }
        return cnt;
    }
};