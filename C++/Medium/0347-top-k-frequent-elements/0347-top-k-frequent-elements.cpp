/*
I will use hash map to store the frequency of each element.
Then i will return the ans.


*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        vector<int> ans;

        for (int num : nums) {
            mpp[num]++;
        }

        vector<vector<int>> count;

        for (auto it : mpp) {
            count.push_back({it.second, it.first});
        }

        sort(count.begin(), count.end());
        for (int i = 0; i < count.size(); i++) {
            cout << count[i][0] << " " << count[i][1] << endl;
        }

        for (int i = 0; i < k ;i++) {
            ans.push_back(count[count.size()-1-i][1]);
        }

        return ans;
    }
};