class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        vector<pair<int, int>> count;

        for (auto &it : mp) {
            count.push_back({it.second, it.first});
        }

        sort(count.rbegin(), count.rend());

        vector<int> res;

        for (int i = 0; i < k; i++) {
            res.push_back(count[i].second);
        }

        return res;
    }
};