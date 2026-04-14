/*
----Brute----
I will use linear search and find first target from start and
first target from end.
When i find both i will break the loop.

TC:O(N)
SC:O(1)
*/

/*
---Better-----
I will use binary search to find the target.
then i will linear search from mid to left and right till
left most target and right most target.

TC:(N) Worst Case if all elements is target.
SC:O(N)
*/

/*
----Optimal----
I will use 2 binary search

*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //---Brute-----
        // int n=nums.size();
        // int start=-1;
        // int end=-1;

        // for(int i=0; i<n; i++){
        //     if(start!=-1 && end!=-1){
        //         break;
        //     }

        //     if(nums[i]==target && start==-1){
        //         start=i;
        //     }
        //     if(nums[n-i-1]==target && end==-1){
        //         end=n-i-1;
        //     }
        // }

        // return {start,end};

        //----Better-------
        int n = nums.size();
        int start = -1, end = -1;

        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > target)
                high = mid - 1;
            else if (nums[mid] < target)
                low = mid + 1;
            else {
                start = end = mid;

                int l = mid, r = mid;

                while (l > 0 && nums[l - 1] == target)
                    start = --l;
                while (r < n - 1 && nums[r + 1] == target)
                    end = ++r;

                break;
            }
        }

        return {start, end};

        //----Optimal----

        
    }
};