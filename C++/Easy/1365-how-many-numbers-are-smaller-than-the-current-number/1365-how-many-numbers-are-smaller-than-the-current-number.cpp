/*
---Brute---
I will use two nested loop and check if 
nums[i]>nums[j] cnt++
and i will add cnt in vector.
*/


class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;

        for(int i=0; i<n; i++){
            int cnt=0;
            for(int j=0; j<n; j++){
                if(nums[i]>nums[j]){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }

        return ans;
    }
};