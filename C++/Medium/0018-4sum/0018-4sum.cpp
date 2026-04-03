#include <bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //------------------Brute-----------------O(n power 4)
        // int n = nums.size();
        // set<vector<int>> st;
        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         for (int k = j + 1; k < n; k++) {
        //             for (int l = k + 1; l < n; l++) {
        //                 long long sum = nums[i] + nums[j];
        //                 sum+=nums[k];
        //                 sum+=nums[l];
        //                 if (sum == target) {
        //                     vector<int> temp = {nums[i], nums[j], nums[k],
        //                                         nums[l]};
        //                     sort(temp.begin(), temp.end());
        //                     st.insert(temp);
        //                 }
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>> ans(st.begin(), st.end());
        // return ans;

        //------Better---------------O(N cube *log(m))
        // int n = nums.size();
        // set<vector<int>> st;
        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         set<long long>hashset;
        //         for (int k = j + 1; k < n; k++) {
        //             long long sum = nums[i] + nums[j];
        //             sum += nums[k];
        //             long long fourth=target-(sum);
        //             if(hashset.find(fourth)!=hashset.end()){
        //                 int temp4=fourth;
        //             vector<int>temp={nums[i],nums[j],nums[k],temp4};
        //             sort(temp.begin(),temp.end());
        //             st.insert(temp);
        //         }
        //         hashset.insert(nums[k]);
        //         }
        //     }
        // }
        // vector<vector<int>> ans(st.begin(), st.end());
        // return ans;

        //------Optimal-----
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int n = static_cast<int>(nums.size());

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }

                int left = j + 1;
                int right = n - 1;

                while (left < right) {
                    long long sum = static_cast<long long>(nums[i]) + nums[j] +
                                    nums[left] + nums[right];
                    if (sum == target) {
                        result.push_back(
                            {nums[i], nums[j], nums[left], nums[right]});

                        int leftValue = nums[left];
                        int rightValue = nums[right];
                        while (left < right && nums[left] == leftValue) {
                            left++;
                        }
                        while (left < right && nums[right] == rightValue) {
                            right--;
                        }
                    } else if (sum < target) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }

        return result;
    }
};