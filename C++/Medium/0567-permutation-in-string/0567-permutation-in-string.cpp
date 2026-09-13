class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if (n > m) return false;

        vector<int> freq(256, 0);

        // Frequency of characters in s1
        for (char ch : s1) {
            freq[ch]++;
        }

        int left = 0;
        int right = 0;
        int cnt = n;

        while (right < m) {

            // Include s2[right]
            if (freq[s2[right]] > 0) {
                cnt--;
            }

            freq[s2[right]]--;
            right++;

            // Window size becomes n
            if (right - left > n) {
                freq[s2[left]]++;

                if (freq[s2[left]] > 0) {
                    cnt++;
                }

                left++;
            }

            // All characters matched
            if (cnt == 0) {
                return true;
            }
        }

        return false;
    }
};