class Solution {
public:
    bool isValid(string s) {
        stack<char> ss;
        for (auto x : s) {
            if (x == '{' || x == '(' || x == '[') {
                ss.push(x);
            } else {
                if (ss.empty())
                    return false;
                if ((x == '}' && ss.top() == '{') ||
                    (x == ']' && ss.top() == '[') ||
                    (x == ')' && ss.top() == '(')) {
                    ss.pop();
                } else {
                    return false;
                }
            }
        }
        if (ss.size() == 0)
            return true;
        else
            return false;
    }
};