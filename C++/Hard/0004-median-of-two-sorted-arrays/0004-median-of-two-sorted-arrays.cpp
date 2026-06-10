/*
Use two pointers to traverse both sorted arrays similarly to the merge step of Merge Sort. At each step, pick the smaller element and keep track of the current and previous elements. Continue until reaching the middle position of the combined array.

If the total number of elements is odd, the median is the middle element.
If the total number of elements is even, the median is the average of the two middle elements.

Time Complexity: O(m + n)
Space Complexity: O(1)

*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        int total = m + n;

        int i = 0, j = 0;
        int prev = 0, curr = 0;

        for(int k = 0; k <= total / 2; k++) {
            prev = curr;

            if(i < m && (j >= n || nums1[i] <= nums2[j])) {
                curr = nums1[i++];
            } else {
                curr = nums2[j++];
            }
        }

        if(total % 2 == 0)
            return (prev + curr) / 2.0;
        else
            return curr;
    }
};