/*
----Brute----
I will iterate from start and will search for the target and return the index.
TC:O(N)
SC:O(1)
*/


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();

        for(int i=0; i<n; i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};