/*
---Brute---
I will use two nested loop and check if
nums[i]>nums[j] cnt++
and i will add cnt in vector.
*/

/*----Optimal
I will create an empty array of 101 size and all elements=0.
Then i will iterate in nums and update the count of numbers in
nums in array.
then i will do cummulative sum of current index in array with
previous count sum.
then i will


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

        for (int x : nums){
            arr[x]++;   
            //cout<<arr[x]<<endl;
        }

        for (int i = 1; i < 101; i++){
            arr[i] += arr[i - 1];
            cout<<arr[i]<<endl;
        }
            

        vector<int> ans;
        for (int x : nums){
           // cout<<arr[x-1]<<endl;
            ans.push_back(x == 0 ? 0 : arr[x - 1]);
        }

        return ans;
    }
};