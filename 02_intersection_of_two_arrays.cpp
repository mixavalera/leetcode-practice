class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> first;
        set<int> resultSet;

        for (int i = 0; i < nums1.size(); i++) {
            first.insert(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++) {
            if (first.find(nums2[i]) != first.end()) {
                resultSet.insert(nums2[i]);
            }
        }

        vector<int> result;

        for (int x : resultSet) {
            result.push_back(x);
        }

        return result;
    }
};
