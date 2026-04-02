class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        vector<int> ans;
        int mini=(n/3)+1;
        for (int num : nums) {
            mpp[num]++;
            if (mpp[num]==mini) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};