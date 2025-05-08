class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1;
        int maxwater=0;
        while(left<right){
            int w=right-left;
            int h=min(height[left],height[right]);
            int area=w*h;

            maxwater=max(maxwater,area);
            if(height[left]<height[right]){
                left++;
            }else if(height[left]>height[right]){
                right--;
            }else{
                left++;
                right--;
            }
        }
        return maxwater;
    }
};