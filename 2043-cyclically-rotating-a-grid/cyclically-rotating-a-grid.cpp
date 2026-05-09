class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {

        int n = grid.size();
        int m = grid[0].size();

        // Number of layers/rings in matrix
        int layers = min(n, m) / 2;

        for (int layer = 0; layer < layers; layer++) {

            vector<int> nums;

            // Boundaries of current layer
            int top = layer;
            int bottom = n - layer - 1;
            int left = layer;
            int right = m - layer - 1;


            // Top row (left -> right)
            for (int j = left; j <= right; j++) {
                nums.push_back(grid[top][j]);
            }

            // Right column (top+1 -> bottom-1)
            for (int i = top + 1; i <= bottom - 1; i++) {
                nums.push_back(grid[i][right]);
            }

            // Bottom row (right -> left)
            for (int j = right; j >= left; j--) {
                nums.push_back(grid[bottom][j]);
            }

            // Left column (bottom-1 -> top+1)
            for (int i = bottom - 1; i >= top + 1; i--) {
                nums.push_back(grid[i][left]);
            }

            // Effective rotations needed
            int len = nums.size();
            int rotateBy = k % len;

            // Left rotate the layer elements
            rotate(nums.begin(),
                   nums.begin() + rotateBy,
                   nums.end());

            // Put rotated elements back 

            int idx = 0;

            // Fill top row
            for (int j = left; j <= right; j++) {
                grid[top][j] = nums[idx++];
            }

            // Fill right column
            for (int i = top + 1; i <= bottom - 1; i++) {
                grid[i][right] = nums[idx++];
            }

            // Fill bottom row
            for (int j = right; j >= left; j--) {
                grid[bottom][j] = nums[idx++];
            }

            // Fill left column
            for (int i = bottom - 1; i >= top + 1; i--) {
                grid[i][left] = nums[idx++];
            }
        }

        return grid;
    }
};