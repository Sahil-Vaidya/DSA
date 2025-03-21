class Solution {
public:

    int solve(string& a,string& b,int i,int j,vector<vector<int>> &dp){
        //base case
        if(i == a.length()) return b.length()-j;
        if(j == b.length()) return a.length()-i;

        if(dp[i][j]!=-1) return  dp[i][j];

        int ans=0;
        if(a[i]==b[j]){
            return solve(a,b,i+1,j+1,dp);
        }else{
            //insert
            int insertans= 1 + solve(a,b,i,j+1,dp);

            //delete
            int deleteans= 1 + solve(a,b,i+1,j,dp);

            //replace
            int relaceans= 1 + solve(a,b,i+1,j+1,dp);

            ans=min(insertans,min(deleteans,relaceans));
        }
        return dp[i][j] = ans;
    }


    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.length(), vector<int> (word2.length(),-1));
        return solve(word1,word2, 0,0,dp);
    }
};