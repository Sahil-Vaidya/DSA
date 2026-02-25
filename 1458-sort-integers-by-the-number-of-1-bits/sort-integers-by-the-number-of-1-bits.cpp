class Solution {
public:

    static bool check(int a,int b){
        int bits1=__builtin_popcount(a);
        int bits2=__builtin_popcount(b);
        if(bits1==bits2){
            return a<b; //asc
        }
        return bits1<bits2;
    }    

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),check);
        return arr;
    }
};