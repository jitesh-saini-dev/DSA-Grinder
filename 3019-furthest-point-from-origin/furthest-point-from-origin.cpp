class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0;
        int right = 0;
        int blank = 0;

        for (auto x : moves) {
            if (x == 'L') left++;
            else if (x == 'R') right++;
            else blank++;
        }

        int condition1 = abs(right - left + blank);
        int condition2 = abs(left - right + blank);

        return max(condition1, condition2);
    }
};