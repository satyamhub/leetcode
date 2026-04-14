/*
----Brute----
I will iterate from start and will search for the target and return the index.
TC:O(N)
SC:O(1)
*/

/*
-----Better-----
I will use the binary search.


*/


class Solution {
public:
    int brute(vector<int>&nums, int target){
        int n=nums.size();

        for(int i=0; i<n; i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int ans=brute(nums,target);
        return ans;
    }
};