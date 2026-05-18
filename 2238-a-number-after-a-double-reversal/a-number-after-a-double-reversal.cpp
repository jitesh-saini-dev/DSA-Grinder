class Solution {
public:
    bool isSameAfterReversals(int num) {
        long rev = 0;
        int original = num;

        while (num) {
            rev = rev * 10 + (num % 10);
            num /= 10;
        }

        long rev2 = 0;
        while (rev) {
            rev2 = rev2 * 10 + (rev % 10);
            rev /= 10;
        }

        if (original == rev2)
            return true;
        else
            return false;
    }
};