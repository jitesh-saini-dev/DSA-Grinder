class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();

        int i = 0;
        int j = n - 1;
        int maxi = 0;

        while (colors[i] == colors[j]) {
            j--;
        }
        maxi = max(maxi, abs(j - i));

        j = n - 1;
        while (colors[i] == colors[j]) {
            i++;
        }
        maxi = max(maxi, abs(j - i));

        return maxi;
    }
};