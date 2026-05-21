class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>mpp;
        for(int i=0; i<n; i++){
            if(mpp[nums[i]]>0){
                ans.push_back(nums[i]);
            }else{
                mpp[nums[i]]++;
            }
        }
        return ans;
    }
};