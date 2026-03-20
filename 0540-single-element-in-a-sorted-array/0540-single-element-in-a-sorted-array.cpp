class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=1; i<n-1; i=i+2){
            if(nums[j]!=nums[i]){
                return nums[j];
            }
            j=j+2;
        }return nums[j];
    }
};