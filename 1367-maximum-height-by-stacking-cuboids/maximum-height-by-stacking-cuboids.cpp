class Solution {
public:
    bool check(vector<int>& base, vector<int>& newbox) {
        if(newbox[0] <= base[0] && newbox[1] <= base[1] && newbox[2] <= base[2])
            return true;
        else
            return false;
    }

    int solve(int n, vector<vector<int>>& cuboids) {
        vector<int> currow(n + 1, 0);
        vector<int> nextrow(n + 1, 0);

        for(int curr = n - 1; curr >= 0; curr--) {
            for(int prev = curr - 1; prev >= -1; prev--) {
                // include d
                int incl = 0;
                if(prev == -1 || check(cuboids[curr], cuboids[prev])) {
                    incl = cuboids[curr][2] + nextrow[curr + 1];
                }

                // exclude 
                int exl = 0 + nextrow[prev + 1];

                currow[prev + 1] = max(incl, exl);
            }
            nextrow = currow;
        }
        return nextrow[0];
    }

    int maxHeight(vector<vector<int>>& cuboids) {
        // Sort each cuboid's dimensions
        for(auto& a : cuboids) {
            sort(a.begin(), a.end());
        }

        // Sort cuboids based on dimensions
        sort(cuboids.begin(), cuboids.end());
        
        return solve(cuboids.size(), cuboids);
    }
};
