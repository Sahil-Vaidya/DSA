class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())   return false;

        string conc=s+s;
        if(conc.find(goal)!= string::npos){
            return true;
        }
        return false;
    }
};

//approach 
// s+s = abcdeabcde
//find goal on s+s 
//return ture;