/*
Approach:
1. I will initialize a count variable to cout how many times does the
   nums[i]>nums[i+1].
2. To check first and last element if nums[0]>nums[n-1] i used modulo function.

3. if count <=1 it will return true else false.

TC:O(N)
SC:O(1)
*/


class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i + 1) % n]) {
                cnt++;
            }
        }

        return cnt <= 1;
    }
};