class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int ans = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);

            if (mp[nums[i]].size() >= 3) {
                int n = mp[nums[i]].size();
                int i1 = mp[nums[i]][n - 3];
                int i3 = mp[nums[i]][n - 1];

                int dist = 2 * (i3 - i1);
                ans = min(ans, dist);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};