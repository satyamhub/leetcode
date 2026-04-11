/*
----Brute-----
I will use a brute force approach to count the reverse pairs.
I will use two nested loops to check for all pairs of indices (i, j) such that i
< j and nums[i] > 2 * nums[j]. TC:O(N^2) SC:O(1)
*/

/*
------Optimal---------
I will use merge sort and count the reverse pairs while merging the two halves.
TC:O(NlogN)
SC:O(N) because of the temporary merge array
i will count the reverse pairs when the right element is smaller than the left
element, because all the elements to the right of the left element will also be
greater than the right element. and i will add the count of reverse pairs to the
total count.
*/

class Solution {
public:
    int mergeAndCount(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        temp.reserve(high - low + 1);

        int left = low;
        int right = mid + 1;
        int cnt = 0;

        // First pass: count reverse pairs
        int r = mid + 1;
        for (int l = low; l <= mid; l++) {
            while (r <= high && nums[l] > 2LL * nums[r]) {
                r++;
            }
            cnt += (r - mid - 1);
        }

        // Second pass: merge the arrays
        left = low;
        right = mid + 1;
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left++]);
        }

        while (right <= high) {
            temp.push_back(nums[right++]);
        }

        for (int i = 0; i < static_cast<int>(temp.size()); i++) {
            nums[low + i] = temp[i];
        }

        return cnt;
    }
    int mergeSort(vector<int>& nums, int low, int high) {
        int cnt = 0;
        if (low < high) {
            int mid = low + (high - low) / 2;
            cnt += mergeSort(nums, low, mid);
            cnt += mergeSort(nums, mid + 1, high);
            cnt += mergeAndCount(nums, low, mid, high);
        }
        return cnt;
    }

    int countReversePairs(vector<int> &nums) {
    return mergeSort(nums, 0, nums.size() - 1);
    }

    int reversePairs(vector<int>& nums) {
        // int n = nums.size();
        // int cnt = 0;

        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         if (nums[i] > 2LL * nums[j]) {
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;
        int ans=countReversePairs(nums);

        return ans;
    }
};