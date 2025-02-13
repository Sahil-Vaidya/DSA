class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
    priority_queue<long long, vector<long long>, greater<long long>> minheap(nums.begin(), nums.end());
    int ans=0;
    while(minheap.top()<k){
        if (minheap.size() < 2) return -1;

        long long min1 = minheap.top();
        minheap.pop();

        long long min2 = minheap.top();
        minheap.pop();

        minheap.push(min1 * 2 + min2);
        ans++;
    }
    return ans;
    }
};