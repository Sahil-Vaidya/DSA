class Solution {
public:
    int reverseBits(int n) {
        if(n==0)    return 0;

        unsigned int ans = 0;     
        unsigned int mask = 1; 

        for(int i=0;i<32;i++){
            if((mask & n) != 0){
                ans |= (1u << (31 - i));   
            }
            mask <<= 1;
        }
        return ans;
    }
};