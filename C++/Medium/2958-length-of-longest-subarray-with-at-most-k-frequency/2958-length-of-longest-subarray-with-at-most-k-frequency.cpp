class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int> mp;
        int start=0; int end=0;

        int maxlen=-1;
        while(end<n){
            mp[nums[end]]++;
            while(mp[nums[end]]>k){
                mp[nums[start]]--;
                start++;
            }
            maxlen=max(end-start+1, maxlen);

            end++;
        }

        return maxlen;
    }
};