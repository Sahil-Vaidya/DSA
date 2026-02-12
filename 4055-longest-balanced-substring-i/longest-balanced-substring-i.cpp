class Solution {
public:

    bool checkequal(vector<int> &freq){
        int except=0;
        for(int f:freq){
            if(f==0)    continue;
            if(except==0)  except=f;
            else if(f!=except)  return false;
        }
        return true;
    }

    int longestBalanced(string s) {
        int n=s.length();
        int maxlen=0;
        for(int i=0;i<n;i++){
            vector<int> freq(26,0);
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;

                if((j-i+1)>maxlen && checkequal(freq)){
                    maxlen=j-i+1;
                }
            }
        }
        return maxlen;
    }
};
