class Solution {
public:
    bool isvowel(char c){
        return (c=='A' || c=='E' || c=='I' || c=='O' ||
        c=='U' || c=='a' || c=='e' || c=='i' || c=='o' ||
        c=='u');
    }

    string reverseVowels(string s) {
        int l=0, r=s.size()-1;

        while(l<r){
            while(l<r && !isvowel(s[l])) l++;
            while(l<r && !isvowel(s[r])) r--;

            if(l<r){
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};