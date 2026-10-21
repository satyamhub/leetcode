class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        if (is_sorted(s.begin(), s.end())) return 0;
        if (n == 2) return -1;

        char mn = *min_element(s.begin(), s.end());
        char mx = *max_element(s.begin(), s.end());

        if (s[0] == mn || s[n - 1] == mx) return 1;

        // max exists in s[1..] or min exists in s[..n-2]
        bool maxElsewhere = count(s.begin() + 1, s.end(), mx) > 0;
        bool minElsewhere = count(s.begin(), s.end() - 1, mn) > 0;
        if (maxElsewhere || minElsewhere) return 2;

        return 3;
    }
};