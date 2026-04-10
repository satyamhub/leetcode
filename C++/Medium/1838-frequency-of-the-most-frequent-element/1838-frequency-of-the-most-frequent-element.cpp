/*
I will sort the array.

I will use two pointers:
left  -> start of window
right -> end of window (target value)

Outer while loop -> move right
Inner while loop -> fix window if cost > k

Idea:
Make all elements in window equal to nums[right]

cost = nums[right] * window_size - sum

If cost > k → shrink window from left
Else → valid window, update answer
*/

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int left = 0, right = 0;
        long long sum = 0;
        int maxi = 0;

        // outer loop -> expand window
        while (right < n) {
            
            sum += nums[right]; // include right element

            // inner loop -> shrink window if invalid
            while ((long long)nums[right] * (right - left + 1) - sum > k) {
                sum -= nums[left];
                left++;
            }

            // valid window
            int cnt = right - left + 1;
            maxi = max(maxi, cnt);

            right++; // move forward
        }

        return maxi;
    }
};