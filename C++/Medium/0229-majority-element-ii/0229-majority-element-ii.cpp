class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        vector<int> ans;
        for (int num : nums) {
            mpp[num]++;
            if (mpp[num] > n / 3 && count(ans.begin(), ans.end(), num) == 0) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};