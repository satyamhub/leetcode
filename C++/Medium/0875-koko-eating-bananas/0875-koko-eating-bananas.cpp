/*
----Optimal----
I will do binary search from 1 to max element in piles.
I will check if mid is the k.
TC:O(Nlog N)
SC:O(1)


*/


class Solution {
public:
    bool canFinish(const vector<int>& piles, int h, int k) {
        long long hours = 0;
        for (int pile : piles) {
            hours += pile / k;
            if (pile % k != 0) hours++;
            if (hours > h) return false;
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canFinish(piles, h, mid)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};