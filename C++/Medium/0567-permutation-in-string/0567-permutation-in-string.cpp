class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        if (n > m)
            return false;

        vector<int> freq(26, 0);

        for (char ch : s1) {
            freq[ch - 'a']++;
        }

        int left = 0;
        int right = 0;
        int cnt = 0;

        while (right < m) {

            // Current character is required
            if (freq[s2[right] - 'a'] > 0) {
                freq[s2[right] - 'a']--;
                cnt++;
                right++;
            }
            else {
                // Remove characters from left
                freq[s2[left] - 'a']++;
                left++;
                cnt--;
            }

            if (cnt == n)
                return true;
        }

        return false;
    }
};