class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> ans;

        unordered_set<int> sA, sB;

        for (int i = 0; i < n; i++) {
            sA.insert(A[i]);
            sB.insert(B[i]);

            int common = 0;
            for (int x : sA) {
                if (sB.count(x)) common++;
            }

            ans.push_back(common);
        }

        return ans;
    }
};