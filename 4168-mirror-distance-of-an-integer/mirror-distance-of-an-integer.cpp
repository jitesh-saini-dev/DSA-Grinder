class Solution {
public:
    int mirrorDistance(int n) {
        int t1 = n;
        int rev = 0;

        while (t1) {
            int t2 = t1 % 10;
            rev = rev * 10 + t2;
            t1 /= 10;
        }

        int ans = abs(rev - n);
        return ans;
    }
};