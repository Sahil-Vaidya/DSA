class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int l=encodedText.size();
        int cols=l/rows;
        string original;
        for(int col=0;col<cols;col++){
            for(int j=col;j<l;j+=(cols+1)){
                original+=encodedText[j];
            }
        }

        while(!original.empty() && original.back()==' '){
            original.pop_back();
        }
        return original;
    }
};