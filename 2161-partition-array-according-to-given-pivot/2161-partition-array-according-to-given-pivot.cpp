class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> less(0);
        vector<int> equal(0);
        vector<int> greater(0);
        vector<int> ans(0);
        for(int i=0; i<n; i++){
            if(nums[i]<pivot) less.push_back(nums[i]);
            if(nums[i]==pivot) equal.push_back(nums[i]);
            if(nums[i]>pivot) greater.push_back(nums[i]);
        }
        int a=less.size();
        int b=equal.size();
        int c=greater.size();

        for(int i=0; i<n; i++){
            if(i<a) ans.push_back(less[i]);
            if(i>=a && i<a+b) ans.push_back(equal[i-a]);
            if(i>=a+b) ans.push_back(greater[i-(a+b)]);
        }

        return ans;
        
    }
};