class Solution {
public:
    int minimumDeletions(string s) {
        stack<int> st;
        int ans=0;
        for(char c:s){
            if(c=='b'){
                st.push(c);
            }else{
                //ch == 'a'
                if(!st.empty()){
                    ans++;
                    st.pop();
                }
            }
        }
        return ans;
    }
};