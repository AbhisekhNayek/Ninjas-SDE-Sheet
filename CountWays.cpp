class Solution {
public:
    int countWays(string s1, string s2) {
        const int MOD = 1e9 + 7;
        int m = s1.length();
        int n = s2.length();

        if (n == 0) return 1; 
        if (m == 0) return 0;  

        vector<int> cumml_s2(n, 0);

        for (int i = 0; i < m; ++i) {
            for (int j = n - 1; j >= 0; --j) {
                if (s1[i] == s2[j]) {
                    if (j == 0) {
                        cumml_s2[j] = (cumml_s2[j] + 1) % MOD;
                    } else {
                        cumml_s2[j] = (cumml_s2[j] + cumml_s2[j - 1]) % MOD;
                    }
                }
            }
        }

        return cumml_s2[n - 1];
    }
};
