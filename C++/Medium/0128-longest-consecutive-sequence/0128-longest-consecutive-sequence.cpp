class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> mpp;

        for (int num : nums) {
            mpp[num]++;
        }

        int maxi = 0;
        int cnt = 0;

        int prev = INT_MIN;

        for (auto it : mpp) {
            if (it.first == prev + 1) {
                cnt++;
            } else {
                cnt = 1;
            }

            maxi = max(maxi, cnt);
            prev = it.first;
        }

        return maxi;
    }
};