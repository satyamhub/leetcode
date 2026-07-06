class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int left=0;   //Unique Element
        int right=0;  //Duplicate Element
        int ans=1;
        

        while(left<=right && right<n){
            if(nums[left]==nums[right]){
                right++;
            }else{
                left++;
                swap(nums[left],nums[right]);
                right++;
                ans++;
            }
        }
        return ans;
    }
};