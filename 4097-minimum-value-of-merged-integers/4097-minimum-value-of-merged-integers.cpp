class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        vector<int>merge;

        for(int i=0; i<n-1; i+=2){
            int digit=log10(nums[i+1])+1;
            int temp=pow(10,digit);
            int val=nums[i]*temp+nums[i+1];
            merge.push_back(val);
        }

        int ans=merge[0];

        for(int i=0; i<merge.size(); i++){
            ans=min(ans, merge[i]);
        }
        return ans;
    }
};