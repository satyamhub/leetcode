class Solution {
public:
    bool solve(string& s, string& p, int i, int j) {
        // Pattern completely processed
        if (j == p.size())
            return i == s.size();

        bool firstMatch = (i < s.size() &&
                           (s[i] == p[j] || p[j] == '.'));

        // If next character is '*'
        if (j + 1 < p.size() && p[j + 1] == '*') {
            // Option 1: use zero occurrences
            // Option 2: consume one character if it matches
            return solve(s, p, i, j + 2) ||
                   (firstMatch && solve(s, p, i + 1, j));
        }

        return firstMatch && solve(s, p, i + 1, j + 1);
    }

    bool isMatch(string s, string p) {
        return solve(s, p, 0, 0);
    }
};