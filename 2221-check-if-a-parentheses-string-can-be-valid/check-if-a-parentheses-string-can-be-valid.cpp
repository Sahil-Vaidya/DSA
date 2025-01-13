class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n=s.size();
        if(n%2!=0){
            return false;
        }

        stack<int> loc,unloc;
        for(int i=0;i<n;i++){
            if(locked[i]=='0'){
                unloc.push(i);
            }else if(s[i]=='('){
                loc.push(i);
            }else{
                if(!loc.empty()){
                    loc.pop();
                }else if(!unloc.empty()){
                    unloc.pop();
                }else{
                    return false;
                }
            }
        }
        //check from rev
        while(!loc.empty() && !unloc.empty() && (loc.top()<unloc.top())){
            loc.pop();
            unloc.pop();
        }

        if(!loc.empty()){
            return false;
        }
        return true;
    }
};