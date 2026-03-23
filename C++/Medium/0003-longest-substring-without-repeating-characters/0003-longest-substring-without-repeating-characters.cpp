class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxi = 0;
        int right = 0, left = 0;
        unordered_map<char, int> mpp;

        while (right < n) {
            char ch = s[right];

            if (mpp.count(ch) && mpp[ch] >= left) {
                left = mpp[ch] + 1;
            }

            mpp[ch] = right;
            maxi = max(maxi, right - left + 1);

            right++;
        }
        return maxi;
    }
};