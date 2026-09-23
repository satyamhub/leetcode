class Solution {
public:
    vector<vector<int>> dp;

    bool check_palindrome(string &s, int left, int right) {

        if (left >= right)
            return true;

        if (dp[left][right] != -1)
            return dp[left][right];

        if (s[left] != s[right])
            return dp[left][right] = false;

        return dp[left][right] =
            check_palindrome(s, left + 1, right - 1);
    }

    string longestPalindrome(string s) {

        int n = s.size();

        if (n <= 1)
            return s;

        dp.assign(n, vector<int>(n, -1));

        int start = 0;
        int maxLen = 1;

        for (int i = 0; i < n; i++) {

            for (int j = i; j < n; j++) {

                int currLen = j - i + 1;

                if (currLen > maxLen &&
                    check_palindrome(s, i, j)) {

                    start = i;
                    maxLen = currLen;
                }
            }
        }

        return s.substr(start, maxLen);
    }
};