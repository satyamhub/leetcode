
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> freq(256, -1);

        int left = 0;
        int right = 0;
        int maxlen = 0;

        while (right < n) {

            if (freq[s[right]] != -1) {
                left = max(left, freq[s[right]] + 1);
            }

            maxlen = max(maxlen, right - left + 1);

            freq[s[right]] = right;
            right++;
        }

        return maxlen;
    }
};
