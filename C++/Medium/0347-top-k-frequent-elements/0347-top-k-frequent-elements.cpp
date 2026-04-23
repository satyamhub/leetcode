/*
Approach 1:
- Count the frequency of each element using a hash map.
- Store the data as {frequency, element} pairs in a vector.
- Sort the vector in descending order of frequency.
- Pick the top k elements and return their corresponding values.
- TC:O(N logN) Worst Case
- SC:O(N) Worst Case
*/


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        
        // Count frequency
        for (int num : nums) {
            mpp[num]++;
        }

        vector<vector<int>> count;

        // Store as {freq, element}
        for (auto it : mpp) {
            count.push_back({it.second, it.first});
        }

        // Sort in descending order of frequency
        sort(count.begin(), count.end(), [](auto &a, auto &b){
            return a[0] > b[0];
        });

        vector<int> ans;

        // Take top k elements
        for (int i = 0; i < k; i++) {
            ans.push_back(count[i][1]);
        }

        return ans;
    }
};