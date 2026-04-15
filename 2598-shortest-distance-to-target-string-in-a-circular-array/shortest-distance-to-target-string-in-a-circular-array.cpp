class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int ans = INT_MAX;

        for(int i = 0; i < n; i++) {
            if(words[i] == target) {
                int dist = abs(i - startIndex);
                dist = min(dist, n - dist);
                ans = min(ans, dist);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};