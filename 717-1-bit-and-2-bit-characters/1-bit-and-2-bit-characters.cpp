class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        while(i<bits.size()-1){
            i += bits[i] + 1; // if 0 single jump if 1 double jump
        }
        return i==bits.size()-1;
    }
};