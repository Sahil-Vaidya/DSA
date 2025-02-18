class Solution {
public:
    string smallestNumber(string pattern) {
        string result;
        stack<int> numstack;
        for(int i=0;i<=pattern.size();i++){
            numstack.push(i+1);
            if(i == pattern.size() || pattern[i] == 'I'){
                while(!numstack.empty()){
                    result += to_string(numstack.top());
                    numstack.pop();
                }
            }
        }
        return result;
    }
};