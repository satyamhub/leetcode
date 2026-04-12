/*
---Brute---
I will use two nested loop and check if
nums[i]>nums[j] cnt++
and i will add cnt in vector.
*/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // int n=nums.size();
        // vector<int>ans;

        // for(int i=0; i<n; i++){
        //     int cnt=0;
        //     for(int j=0; j<n; j++){
        //         if(nums[i]>nums[j]){
        //             cnt++;
        //         }
        //     }
        //     ans.push_back(cnt);
        // }

        // return ans;

        //----Optimal-----
        int arr[101] = {0};

        for (int x : nums)
            arr[x]++;

        for (int i = 1; i < 101; i++)
            arr[i] += arr[i - 1];

        vector<int> ans;
        for (int x : nums)
            ans.push_back(x == 0 ? 0 : arr[x - 1]);

        return ans;
    }
};