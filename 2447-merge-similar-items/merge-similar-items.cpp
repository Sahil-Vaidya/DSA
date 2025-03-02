class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ans;
        int n = items1.size(), m = items2.size();
        int i = 0, j = 0;

        sort(items1.begin(), items1.end());
        sort(items2.begin(), items2.end());


        while (i < n && j < m) {
            if (items1[i][0] == items2[j][0]) {
                ans.push_back({items1[i][0], items1[i][1] + items2[j][1]});
                i++; j++;
            } else if (items1[i][0] < items2[j][0]) {
                ans.push_back(items1[i]);
                i++;
            } else {
                ans.push_back(items2[j]);
                j++;
            }
        }

        while (i < n) {
            ans.push_back(items1[i]);
            i++;
        }

        while (j < m) {
            ans.push_back(items2[j]);
            j++;
        }

        return ans;
    }
};
