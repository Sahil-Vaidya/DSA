class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        int maxfreq = 0, ans = 0;

        for(int num : nums){   
            freq[num]++;
            maxfreq = max(maxfreq, freq[num]);
        }

        for(auto &p : freq){
            if(p.second == maxfreq){
                ans += p.second;
            }
        }
        return ans;
    }
};