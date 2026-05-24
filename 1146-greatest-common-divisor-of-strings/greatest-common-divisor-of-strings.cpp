class Solution {
public:
    string gcdOfStrings(string firstString, string secondString) {
        int length1 = firstString.size();
        int length2 = secondString.size();

        if (firstString + secondString != secondString + firstString) {
            return "";
        }

        int greatestLength = gcd(length1, length2);

        return firstString.substr(0, greatestLength);
    }
};