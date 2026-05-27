class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ans = 0;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            bool hasLower = false;
            bool hasUpper = false;

            int lastLower = -1;
            int firstUpper = -1;

            for (int i = 0; i < word.size(); i++) {
                if (word[i] == ch) {
                    hasLower = true;
                    lastLower = i;
                }

                if (word[i] == ch - 'a' + 'A') {
                    hasUpper = true;

                    if (firstUpper == -1) {
                        firstUpper = i;
                    }
                }
            }

            if (hasLower && hasUpper && lastLower < firstUpper) {
                ans++;
            }
        }

        return ans;
    }
};