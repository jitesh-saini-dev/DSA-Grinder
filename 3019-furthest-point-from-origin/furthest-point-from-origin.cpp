class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int pos = 0;
        int blank = 0;

        for (char ch : moves) {
            if (ch == 'L') pos--;
            else if (ch == 'R') pos++;
            else blank++;
        }

        return abs(pos) + blank;
    }
};