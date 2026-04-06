#include <bits/stdc++.h>
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //----------Brute-------------------
        // for(int i=0; i<n; i++){
        //     nums1[m+i]=nums2[i];
        // }
        // sort(nums1.begin(),nums1.end());

        //------Better------------
        //
        if(!nums2.empty()){
            if(nums2[0]>=nums1[0]){
            nums1[0]=nums2[0];
            }
        }
        int last1 = m + n - 1;
        int last2 = n - 1;
        int middle1 = m - 1;
        while (middle1 >= 0 && last2 >= 0) {
            if (nums1[middle1] >= nums2[last2] && last2 >= 0) {
                nums1[last1] = nums1[middle1];
                middle1--;
                last1--;
            }
            if (nums2[last2] > nums1[middle1] && last2 >= 0) {
                nums1[last1] = nums2[last2];
                last2--;
                last1--;
            }
        }
        
    }
};