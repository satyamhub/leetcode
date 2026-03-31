class Solution {
public:
        int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        
        int presum = 0;
        int result = 0;
        map[presum] = 1;
        
        for (int n : nums) {
            presum += n;
            int remove=presum-k;
            result += map[remove];
            map[presum]++;
        }
        
        return result;
    }
};