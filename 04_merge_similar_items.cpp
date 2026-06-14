class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> items;

        for (int i = 0; i < items1.size(); i++) {
            int value = items1[i][0];
            int weight = items1[i][1];

            items[value] += weight;
        }

        for (int i = 0; i < items2.size(); i++) {
            int value = items2[i][0];
            int weight = items2[i][1];

            items[value] += weight;
        }

        vector<vector<int>> result;

        for (auto item : items) {
            result.push_back({item.first, item.second});
        }

        return result;
    }
};
