class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=0,cnt=0;
        for(int i:apple)
            sum+=i;
        
        sort(capacity.begin(),capacity.end());
        for(int i=capacity.size()-1;i>=0;i--){
            sum-=capacity[i];
            cnt++;
            if(sum<=0){
                break;
            }
        }
        return cnt;
    }
};