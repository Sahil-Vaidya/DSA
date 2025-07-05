class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> countarray(501, 0);  
        for (int i : arr) {
            countarray[i]++;
        }

        for (int i = 500; i >= 1; --i) {  
            if (countarray[i] == i) {
                return i;
            }
        }

        return -1;
    }
};